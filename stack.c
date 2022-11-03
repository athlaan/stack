#include <stdio.h>
#include <stdlib.h>

#define N 100

//globales esto no se hace
int stack[N];
int tos = -1;

void push(int val){
  tos++;
  stack[tos] = val;
}

int pop(void){
  return stack[tos--];
}
