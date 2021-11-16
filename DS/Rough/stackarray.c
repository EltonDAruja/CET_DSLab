#include<stdio.h>

#define MAX 5

void push();
void pop();
void display();

int STACK[MAX],TOP=-1;

void main(){
    char c,ch;    
    do{
        printf("\nMAIN MENU");
        printf("\n\n1.Push\n2.Pop\n3.Display");
        printf("\n\nEnter Choice(1/2/3) : ");
        scanf(" %c",&c);

            switch(c)
            {       case '1' : push();
                               break;
                    case '2' : pop();
                               break;
                    case '3' : display();
                               break;
                    default  : printf("Invalid Choice");
                               break;
            }
        printf("\nContinue?(y/n) : ");
        scanf("%s",&ch);
      }while(ch=='y');
}

void push(){ 
    int e;
        if(TOP==MAX-1)
            printf("\nSTACK OVERFLOW!!\n");
        else{
            TOP++;
            printf("\nEnter data to push : ");
            scanf("%d",&e);
            STACK[TOP]=e;
            printf("\n%d Pushed \n",e);
        }
}

void pop(){
        if(TOP==-1)
            printf("\nSTACK UNDERFLOW!!\n");
        else{
            printf("\n%d Popped",STACK[TOP]);
            printf("\n");
            TOP--;
        }
}

void display(){
    int i;
        printf("\nCurrent Stack : \n");
        for(i=0;i<=TOP;i++)
            printf("%d ",STACK[i]);
}
