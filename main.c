#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {int i; struct node * next;};
struct node* printhelper(struct node*);
struct node* freehelper(struct node*);


void print_list(struct node* a){
  printf("{ ");

  struct node* b = a;
  while( b = printhelper(b) ){
    
  }
  printf("}\n");
  return;

}

struct node* printhelper(struct node* a){
  printf("%d, ", a->i);
  return a->next;
}

struct node * insert_front(struct node * a, int b){
  struct node* c = malloc(sizeof(struct node));
  c->i = b;
  c->next = a;
  return c;
}

struct node * free_list(struct node* a){
  if(!a){
    return a;
  }

  
  free_list(a->next);
  free(a);
  a = 0;
  return a;
}


  




					 



int main(){

  struct node a;
  a.i = 1;
  print_list(&a);

  struct node* b = insert_front(&a, 2);
  print_list(b);

  struct node* c = insert_front(b, 3);
  print_list(c);

  free_list(c);
  
  
}
