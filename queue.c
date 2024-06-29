#include "queue.h"
#include "stdlib.h"

int init_queue(queue *q, int size) {
  q->size = size;
  q->front = 0;
  q->rear = -1;
  q->count = 0;
  q->data = (int *)malloc(sizeof(int) * size);
  return size;
}

int enqueue(queue *q, int value) {
  if (is_queue_full(q)) {
    return -1;
  }
  if (q->rear == q->size - 1) {
    q->rear = 0;
  }
  q->count++;
  q->data[++q->rear] = value;
  return 0;
}

int dequeue(queue *q) {
  if (is_queue_empty(q)) {
    return -1;
  }
  if (q->front == q->size - 1) {
    q->front = 0;
  }
  q->count--;
  return q->data[q->front++];
}

int queue_peek(queue *q) {
  if (is_queue_empty(q)) {
    return -1;
  }
  return q->data[q->front];
}

int is_queue_empty(queue *q) { return q->count == 0; }

int is_queue_full(queue *q) { return q->count == q->size; }

void delete_queue(queue *q) { free(q->data); }
