#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *temp, *front=NULL, *rear=NULL, *newnode;

void display(){
    temp=front;
    if(temp==NULL)
        printf("\nQueue Empty\n");
    else{
        do{
            printf("%d ",temp->data);
            temp=temp->next;
        }while(temp!=front);
    }
}

void enqueue(int d){
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=d;
    if(front==NULL){
        front=rear=newnode;
        newnode->next=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
        newnode->next=front;
    }
}

void dequeue(){
    temp=front;
    if(front==NULL)
        printf("Empty Queue");
    else if(rear==front){
        printf("Deleted element : %d",front->data);
        rear=front=NULL;
        free(temp);
    }
    else{
        printf("Deleted element : %d",front->data);
        front=front->next;
        rear->next=front;
        free(temp);
    }
}

void main(){
    char ch;
    int v;
        printf("__MAIN MENU__");
        printf("\n1.enqueue\n2.dequeue\n3.Display\n");
    do{
        printf("Enter Choice : ");
        scanf(" %c",&ch);
        
        switch(ch){
            case '1':   printf("Enter data : ");
                        scanf("%d",&v);
                        enqueue(v);
                        break;
            case '2':   dequeue();
                        break;
            case '3':   display();
                        break;
        }
        
        printf("\nContinue? ");
        scanf(" %c",&ch);
    }while(ch=='y');
}