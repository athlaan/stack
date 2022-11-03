#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct node {
  int value;
  struct node *next;
} node;
// primer elemento de la pila (head de la ll)
node *stack = NULL;

void push(int item) {
  node *t = stack;
  stack = malloc(sizeof(node));
  stack->value = item;
  stack->next = t;
}

char pop(void){
  if (isempty()){
    printf("Error, pila vacia\n");
    return -127;
  }
  int val = stack->value;
  node *t = stack;
  stack = stack->next;
  free(t);
  return val;
}

bool isempty(void){
  return stack == NULL ? true : false;
}

void printstack(void){
  for (node *x = stack; x != NULL; x = x->next)
  printf("%d ", x->value);
  printf("\n");
}
bool esta_balanceado(char *s){
  int i = 0;
  while (s[i] != 0){
    if (s[i] == ')') {
      if (c!= '(') return false;
    } else{
      push(s[i]);
    }
    i++;
  }
  if (!isempty()) return false;
  return true;
}


int main (void) {
  push(5);
  push(1);
  push(2);
  push(3);
  push(4);
  printstack();

  return 0;
}
