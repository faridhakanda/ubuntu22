// Stack data structure implementation using c langauge

#include <stdio.h>
#define MAX 5

typedef struct stack {
    int data[MAX];
    int top;
} Stack;

void push(Stack *s, int data) {
    if (s->top < MAX) {
        s->data[s->top] = data;
        s->top = s->top + 1;
    } else {
        printf("Stack is full!\n");
    }
}

int pop(Stack *s) {
    int a;
    if (s->top == 0) {
        printf("Stack is empty ");
        return -1;
    } else {
        s->top = s->top - 1;
        a = s->data[s->top];
    }
    return a;
}

int main() {
    int a;
    Stack s;
    s.top = 0;

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);
    push(&s, 5);

    a = pop(&s);
    printf("%d\n", a);

    a = pop(&s);
    printf("%d\n", a);

    a = pop(&s);
    printf("%d\n", a);

    a = pop(&s);
    printf("%d\n", a);

    a = pop(&s);
    printf("%d\n", a);
    
    return 0;
}