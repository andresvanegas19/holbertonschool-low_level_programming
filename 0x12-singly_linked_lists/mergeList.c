#include<stdio.h> 
#include<stdlib.h> 
#include<assert.h> 
struct Node 
{ 
    int data; 
    struct Node* next; 
}; 

void push(struct Node** head_ref, int new_data) 
{ 
    /* allocate node */
    struct Node* new_node = 
        (struct Node*) malloc(sizeof(struct Node)); 
  
    /* put in the data  */
    new_node->data  = new_data; 
  
    /* link the old list off the new node */
    new_node->next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref)    = new_node; 
} 
  
/* Function to print nodes in a given linked list */
void printList(struct Node *node) 
{ 
    while (node!=NULL) 
    { 
        printf("%d ", node->data); 
        node = node->next; 
    } 
} 
  
struct Node* SortedMerge(struct Node* a, struct Node* b)  
{ 
  struct Node* result = NULL; 
  
  /* Base cases */
  if (a == NULL)  
     return(b); 
  else if (b==NULL)  
     return(a); 
  
  /* Pick either a or b, and recur */
  if (a->data <= b->data)  
  { 
     result = a; 
     result->next = SortedMerge(a->next, b); 
  } 
  else 
  { 
     result = b; 
     result->next = SortedMerge(a, b->next); 
  } 
  return(result); 
} 

int main() 
{ 
    /* Start with the empty list */
    struct Node* res = NULL; 
    struct Node* a = NULL; 
    struct Node* b = NULL; 
  
    /* Let us create two sorted linked lists to test 
      the functions 
       Created lists, a: 5->10->15,  b: 2->3->20 */
     push(&a, 15); 
    push(&a, 3); 
    push(&a, 5); 
  
    push(&b, 45); 
    push(&b, 3); 
    push(&b, 45); 
  
    /* Remove duplicates from linked list */
    res = SortedMerge(a, b); 
    printf("Merged Linked List is: \n"); 
    printList(res); 
  
    return 0; 
} 