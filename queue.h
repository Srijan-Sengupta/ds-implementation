#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue {
  int size;
  int front;
  int rear;
  int count;
  int *data;
} queue;

int init_queue(queue *q, int size);
int enqueue(queue *q, int value);
int dequeue(queue *q);
int queue_peek(queue *q);
int is_queue_empty(queue *q);
int is_queue_full(queue *q);
void delete_queue(queue *q);

#endif
