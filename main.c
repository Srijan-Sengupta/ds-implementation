#include "./stack.h"
#include "queue.h"
#include "stdlib.h"
#include <stdio.h>
int main() {
  stack *s = malloc(sizeof(stack));
  int size = init_stack(s, 10);
  printf("stack size: %d\n", size);
  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 10);
  while (!is_empty(s)) {
    printf("%d\n", pop(s));
  }
  delete_stack(s);

  // Circular Queues tests are here
  queue *q = malloc(sizeof(queue));
  int qsize = init_queue(q, 10);
  while (!is_queue_full(q)) {
    enqueue(q, 10);
  }
  while (!is_queue_empty(q)) {
    printf("%d\n", dequeue(q));
  }
  enqueue(q, 1);
  enqueue(q, 2);
  enqueue(q, 3);
  enqueue(q, 4);
  enqueue(q, 5);
  enqueue(q, 6);
  printf("%d\n", queue_peek(q));

  return 0;
}
