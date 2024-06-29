#ifndef STACK_H
#define STACK_H

typedef struct stack {
  int size;
  int top;
  int *data;
} stack;

int init_stack(stack *s, int size);
int push(stack *s, int value);
int pop(stack *s);
int peek(stack *s);
int is_empty(stack *s);
void delete_stack(stack *s);

#endif
