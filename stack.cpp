#include "stack.h"
#include <stdexcept>

void init(Stack*){
  s->top = nullptr;
}

bool isEmpty(const Stack* s){
  return s->top == nullptr;
}

bool isFull(const Stack* s){
  if (isEmpty(s)){
    return false;
  }
  return s->top == &(s->data[MAX - 1]);
}

void push(Stack* s, int value){
  if (isFull(s)){
    throw std::overdlow_error("error");
  }
  if (isEmpty(s)){
    s->top =  &(s->data[0);
  } esle {
    s->top++;
  }
  *(s->top) = value;
}
