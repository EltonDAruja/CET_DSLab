#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *temp, *top=NULL, *head=NULL, *newnode;

void display(){
    temp=top;
    if(temp==NULL)
        printf("\nStack Underflow\n");
    else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

void push(int d){
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=top;
    top=newnode;
}

void pop(){
    temp=top;
    if(temp==NULL)
        printf("Stack Underflow\n");
    else{
        printf("Popped Element : %d",temp->data);
        top=temp->next;
        free(temp);
    }
}

void main(){
    char ch;
    int v;
        printf("__MAIN MENU__");
        printf("\n1.Push\n2.Pop\n3.Display\n");
    do{
        printf("Enter Choice : ");
        scanf(" %c",&ch);
        
        switch(ch){
            case '1':   printf("Enter Value to push : ");
                        scanf("%d",&v);
                        push(v);
                        break;
            case '2':   pop();
                        break;
            case '3':   display();
                        break;
        }
        
        printf("\nContinue? ");
        scanf(" %c",&ch);
    }while(ch=='y');
}