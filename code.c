// Write a C function to add a node in the beginning of a singly linear linked list

#include<stdio.h>
#include<stdlib.h>
void beginsert(int);
struct node{
    int data;
    struct node * next;
};
struct node * head;
int main(){
    int choice,item;
    do{
        printf("ENter the item u want to insert\n");
        scanf("%d",&item);
        beginsert(item);
        printf("0 to enter more \n");
        scanf("%d",&choice);
    }while (choice==0);
}

void beginsert(int item){
    struct node * ptr = (struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL){
        printf("OVERFLOW\n");
    }else
    ptr->data=item;
    ptr->next=head;
    head=ptr;
    printf("Inserted");
}
