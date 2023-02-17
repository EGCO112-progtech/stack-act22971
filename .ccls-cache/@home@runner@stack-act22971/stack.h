
//#ifndef stack_h
#define stack_h
#include "node.h"
typedef struct {
	NodePtr top;
	int size;
}Stack;

typedef Stack * StackPtr;
char push(StackPtr s, char value)
{
NodePtr new_node=(NodePtr)malloc(sizeof(Node));
if(new_node){
  new_node->data = value;
  new_node->nextPtr = s->top;
  s->top = new_node;
  s->size++;
}}
/*void push(NodePtr *top, int x){
NodePtr new_node=(NodePtr)malloc(sizeof(Node));
if(new_node){
  new_node->data = x;
  new_node->nextPtr = *top;
  *top = new_node;
}
}
*/
char pop(StackPtr s)
{
  NodePtr t= s->top;
 if(t){
  char value=t->data;//value=t->data
 
  s->top=t->nextPtr;
  free(t);
   s->size--;
  return value;
   }
  return 0;
  }
/*
int pop(NodePtr *top)
{
 NodePtr t= *top;
  int value=(*top)->data;//value=t->data
 if(t){
  *top=t->nextPtr;
  free(t);}
  return value;
}
*/
void pop_all(StackPtr s){
while(s->top){
 pop(s);
}}
//#endif
