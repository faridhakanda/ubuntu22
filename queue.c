#include <stdio.h>
#define MAX 5

typedef struct queue {
    int data[MAX+1];
    int head, tail;
} Queue;

void enqueue(Queue *q, int data) {
    if ((q->tail+1)%(MAX+1)==q->head) {
        printf("Queue is full!\n");
    } else {
        q->data[q->tail] = data;
        q->tail = (q->tail+1)%(MAX+1);
    }
}

int dequeue(Queue *q) {
    int a;
    if (q->tail == q->head) {
        printf("Queue is empty ");
        return -1;
    } else {
        a = q->data[q->head];
        q->head = (q->head+1)%(MAX+1);
    }
    return a;
}

int main() {
    int a;
    Queue my;
    my.head = 0;
    my.tail = 0;

    enqueue(&my, 1);
    enqueue(&my, 2);
    enqueue(&my, 3);
    enqueue(&my, 4);
    enqueue(&my, 5);
    

    a = dequeue(&my);
    printf("%d\n", a);

    a = dequeue(&my);
    printf("%d\n", a);

    a = dequeue(&my);
    printf("%d\n", a);

    a = dequeue(&my);
    printf("%d\n", a);

    a = dequeue(&my);
    printf("%d\n", a);

    

    return 0;
}