#include<stdio.h>

#define MAX 5

void enqueue();
void dequeue();
void display();

int QUEUE[MAX],FRONT=-1,REAR=-1;

void main(){
    char c,ch;    
    do{
        printf("\nCIRCULAR QUEUE");
        printf("\n\n1.Enqueue\n2.Dequeue\n3.Display");
        printf("\n\nEnter Choice(1/2/3) : ");
        scanf(" %c",&c);

            switch(c)
            {       case '1' : enqueue();
                               break;
                    case '2' : dequeue();
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

void enqueue(){ 
    int e;
        if((REAR==(MAX-1)&&FRONT==0)||(REAR==(FRONT-1)))
            printf("\nQUEUE FULL!!\n");
        else{
            printf("\nEnter data to insert : ");
            scanf("%d",&e);
                if(FRONT=-1){
                    FRONT=REAR=0;
                    QUEUE[REAR]=e;
                }
                else if((REAR=(MAX-1))&&(FRONT!=0)){
                    REAR=0;
                    QUEUE[REAR]=e;
                }
                else{
                    REAR++;
                    QUEUE[REAR]=e;
                }
                // QUEUE[REAR]=e;
            }
}

void dequeue(){
        if(REAR==-1)
            printf("\nQUEUE EMPTY!!\n");
        else{
            printf("\n%d Deleted",QUEUE[FRONT]);
            printf("\n");
            FRONT++;
            if(FRONT>REAR)
                FRONT=REAR=-1;
        }
}

void display(){
    int i;
        printf("\nCurrent Stack : \n");
        for(i=FRONT;i<=REAR;i++)
            printf("%d ",QUEUE[i]);
}

// void display(){
//     int i;
//         if(REAR==-1)
//             printf("\nQUEUE EMPTY!!\n");
//         else{
//             printf("\nCurrent Stack : \n");
//             if(REAR>=FRONT)
//                 for(i=FRONT;i<=REAR;i++)
//                     printf("%d ",QUEUE[i]);
//             else     
//                 for(i=FRONT;i<MAX;i++)
//                     printf("%d ",QUEUE[i]);
//                 for(i=0;i<=REAR;i++)
//                     printf("%d ",QUEUE[i]);

//         }
// }