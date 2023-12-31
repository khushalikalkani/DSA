#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head =  NULL;

void Display(){
    struct node *ptr = head;
    if(head == NULL)
        printf("List is empty...");
    else{
        while(ptr != NULL)
        {
            printf("%d ",ptr -> data);
            ptr = ptr -> next;
        }
    }
    printf("\n");
}

void insertEnd(int val){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp ->data = val;
    temp -> next = NULL;

    if(head == NULL){
        head = temp;
        return;
    }
    while(ptr -> next != NULL)
    {
        ptr = ptr -> next;
    }
    ptr ->  next = temp;
    return;
}

void insertfirst(int val){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = val;
    temp -> next = head;
    if(head == NULL){
        head = temp;
        return;
    }

    while(ptr -> next != NULL)
    {
        ptr = ptr -> next;
    }
     head = temp;
    return;
}

void deletefirst(){
    struct node *ptr = head;
   
    if(head = ptr -> next){
        free(ptr);
        return;
    }

   
}

void midinsert(int val, int position){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp -> data = val;


    while(ptr -> data != position)
    {
        ptr = ptr -> next;
    }
    temp -> next = ptr -> next;
    ptr -> next = temp;

}

void middelete(int position){
    struct node *ptr = head;
    struct node *p;

 while(ptr -> data != position){
        p = ptr;
        ptr = ptr -> next;
    }
    p -> next = ptr -> next;
    free(ptr);
    return;

}

void deleteEnd(){
    struct node *ptr = head;
    struct node *p;

    if(head -> next == NULL){
        head = NULL;
        free(ptr);
        return;
    }

    while(ptr -> next != NULL){
        p = ptr;
        ptr = ptr -> next;
    }
    p -> next = NULL;
    free(ptr);
    return;
}

int main(){
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    Display();
    deleteEnd();
    deleteEnd();
    Display();
    insertfirst(90);
    insertfirst(80);
    Display();
    deletefirst();
    Display();
    midinsert(100,90);
    Display();
    middelete(30);
    Display();
}