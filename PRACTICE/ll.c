#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head, *temp, *newnode, *temp2;
int size=0;

void display(){
    temp=head;
    if(head==NULL){
        printf("Empty List\n");
    }
    else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

void insertend(int d){
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = d;
    newnode->next = NULL;
    if(head==NULL)
        head=newnode;
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void insertbeg(int d){
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = d;
    newnode->next=head;
    head=newnode;
}

void insertpos(int d,int p){
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = d;
    if(head==NULL)
        head=newnode;
    else{
        temp=head;
        for(int i=0;i<p-1;i++)
            temp=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void delbeg(){
    if(head==NULL)
        printf("EMPTY LIST");
    else{
        temp=head;
        head=temp->next;
        printf("Deleted element : %d", temp->data);
        free(temp);
    }
}

void delend(){
    if(head==NULL)
        printf("EMPTY LIST");
    else{
        temp=head;
        while(temp->next->next!=NULL)
            temp=temp->next;
        printf("Deleted element : %d", temp->next->data);
        free(temp->next);
        temp->next=NULL;
    }
}


void delpos(int p){
    if(head==NULL)
        printf("EMPTY LIST");
    else{
        if(p==1)
            delbeg();
        else{
            temp=head;
            for(int i=0;i<p-1;i++){
                temp2=temp;
                temp=temp->next;
            }
            printf("Deleted element : %d", temp->data);
            temp2->next=temp->next;
            free(temp);
        }
    }
}

void main(){
    char ch;
    
        printf("__MAIN MENU__\n");
        printf("1.Insert at beginning\n");
        printf("2.Insert at end\n");
        printf("3.Insert in between\n");
        printf("4.Delete at end\n");
        printf("5.Display\n");
    do{
        printf("Enter Choice : ");
        scanf(" %c",&ch);
            
            switch(ch){
                case '1' : insertbeg(1);
                           break;
                case '2' : insertend(5);
                           break;
                case '3' : insertpos(3,2);
                           break;
                case '4' : delbeg();
                           break;
                case '5' : delend();
                           break;
                case '6' : delpos(4);
                           break;
                case '7' : display(); 
                           break;
                    
                
            }
        printf("\n\nContinue? ");
        scanf(" %c",&ch);
        }while(ch=='y');
}