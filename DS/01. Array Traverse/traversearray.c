#include<stdio.h>
// int a[100],n;

void arrayinsert(int *a,int *n){
	int e,p,i;
		printf("\nEnter the Element you want to Insert : ");
		scanf("%d",&e);
		printf("Enter the position : ");
		scanf("%d",&p);
		for(i=(*n)-1;i>=p-1;i--)
			a[i+1]=a[i];	
		a[p-1]=e;
		(*n)++;
		printf("\nThe Array after Inserion: ");
		for(i=0;i<(*n);i++)
			printf("%d ",a[i]);
}

void arraydelete(int *a,int *n){
	int e,i,j,p,f=0;
		printf("\nEnter the Element you want to Delete : ");
		scanf("%d",&e);
		for(i=0;i<(*n);i++)
		{	if(a[i]==e)
			{	p=i;
				f=1;
				break;
			}
		}		
		if(f==1){
			for(j=p;j<((*n)-1);j++)
				a[j]=a[j+1];	
		(*n)--;
			printf("\nThe Array after Deletion: ");
			for(i=0;i<(*n);i++)
				printf("%d ",a[i]);
		}
		else{
			printf("\nElement not found ");
		}
}

int arraysearch(int *a,int *n){
	int i,e,p;	
		printf("\nEnter the Element you want to Search : ");
		scanf("%d",&e);
		p=-1;
		for(i=0;i<*n;i++)
		{	if(a[i]==e)
			{	p=i;
				break;
			}
			}
	return p;
}


int main(){
	int a[100],n,i,e,p,j;
	char ch;
		printf("Enter Array Length : ");
		scanf("%d",&n);
		printf("Enter the Array : ");
		for(i=0;i<n;i++)
			scanf("%d",(a+i));
	do{	
		printf("\nThe current Array : ");
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
				
		printf("\n\nMAIN MENU");
		printf("\n\n1.Insert\n2.Delete\n3.Search");
		printf("\nEnter your choice : ");
		scanf(" %c",&ch);

		switch(ch)
		{	
				case '1' :	arrayinsert(a,&n);
							break;

				case '2' :	arraydelete(a,&n);
							break;

				case '3' :	p=arraysearch(a,&n);
							if(p==-1)
								printf("\nElement not found!\n");
							else
								printf("\nElement fount at position %d ",p+1);
							break;
					
				default :	printf("INVALID CHOICE");
							break;
		}

		printf("\n\nDo You want to continue?(y/n) : ");
		scanf(" %c",&ch);
	}while(ch=='y');	
	return 0;
}
