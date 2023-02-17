#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "node.h"
#include "stack.h"
int main(int argc, char **argv){
  Stack s;
  int i,N,j,count=0,type=0;
  //type0=correct 
  //type1 too much open parenthesis 
  //type2 too much close parenthesis 
  //type3 wrong type
  NodePtr top =NULL;
  s.top =NULL;
  s.size = 0;
  /*
push(&s,5);
  printf("%d\n",pop(&s));
  push(&s,8);
  printf("%d\n",pop(&s));
  push(&s,11);
  printf("%d\n",pop(&s));
 printf("--------------------------------------\n");
 printf("Checking the parentheses in argv arguments\n");
 printf("--------------------------------------\n");
  for(i=1;i<argc;i++){
    push(&s,atoi(argv[i]));
     for(j=0;j<strlen(argv[i]);j++){
       while(s.top){
       printf("%d",pop(&s));
       /* Use stack to help with the parentheses*/
       //  }}printf("\n");}
 for(i=1;i<argc;i++){
   count =0;
     for(j=0;j<strlen(argv[i]);j++){
       switch(argv[i][j]){
         case '[':push(&s,argv[i][j]); type=0; count++; break;
         case '{':push(&s,argv[i][j]); type=0; count++; break;
         case ']':if(s.top==NULL){ count--; break;}if(pop(&s)!='['||s.top!=NULL){ type=3;} count--; break;
         case '}':if(s.top==NULL){ count--; break;} if(pop(&s)!='{'||s.top!=NULL){ type=3;} count--;  break;
       }
      
       /* Use stack to help with the parentheses*/
        }
   if(type!=3){
       if(count>0) {type =1;}
       if(count<0) {type =2;}
   }
   switch(type){
     case 0:printf("argv %d: correct\n",i); break;
     case 1:printf("argv %d: incorrect :too much open parenthesis\n",i); break;
     case 2:printf("argv %d: incorrect :too much close parenthesis\n",i); break;
     case 3:printf("argv %d: incorrect :mismatch\n",i); break;
   }
   pop_all(&s);
       }
  


//./stack {[]}[] {[]] [] {{ }}
   return 0;
}
