#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
struct CircularQueue
 {
    int front, rear;
    int array[MAX_SIZE];
};

void initialize(struct CircularQueue *queue) 
{
    queue->front = -1;
    queue->rear = -1;
}

int isEmpty(struct CircularQueue *queue)
 {
    return (queue->front == -1 && queue->rear == -1);
}

int isFull(struct CircularQueue *queue) 
{
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

// Function to enqueue an element into the circular queue
void enqueue(struct CircularQueue *queue, int value)
 {
    if (isFull(queue)) 
	{
        printf("Queue is full. Cannot enqueue %d\n", value);
        return;
    } 
	else if (isEmpty(queue))
	 {
        queue->front = 0;
        queue->rear = 0;
    } 
	else
	 {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }

    queue->array[queue->rear] = value;
    printf("%d enqueued to the circular queue\n", value);
}

void dequeue(struct CircularQueue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue\n");
        return;
    }
	 else if (queue->front == queue->rear) 
	{
        printf("%d dequeued from the circular queue\n", queue->array[queue->front]);
        queue->front = -1;
        queue->rear = -1;
    } 
	else
	 {
        printf("%d dequeued from the circular queue\n", queue->array[queue->front]);
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
}
void display(struct CircularQueue *queue)
 {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Circular Queue elements: ");
    int i = queue->front;
    do {
        printf("%d ", queue->array[i]);
        i = (i + 1) % MAX_SIZE;
    } while (i != (queue->rear + 1) % MAX_SIZE);
    printf("\n");
}
int main()
 {
    struct CircularQueue queue;
    initialize(&queue);
    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);
    enqueue(&queue, 5);
    display(&queue);
    dequeue(&queue);
    display(&queue);
    enqueue(&queue, 6);
    display(&queue);
    return 0;
}

