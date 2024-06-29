#include "stack.h"
#include "stdlib.h"

int init_stack(stack *s, int size) {
  s->size = size;
  s->top = -1;
  s->data = (int *)malloc(sizeof(int) * size);
  return size;
}

int push(stack *s, int value) {
  if (s->top == s->size - 1) {
    return -1;
  }
  s->data[++s->top] = value;
  return 0;
}

int pop(stack *s) {
  if (s->top == -1) {
    return -1;
  }
  return s->data[s->top--];
}

int peek(stack *s) {
  if (s->top == -1) {
    return -1;
  }
  return s->data[s->top];
}

int is_empty(stack *s) { return s->top == -1; }

void delete_stack(stack *s) { free(s->data); }
