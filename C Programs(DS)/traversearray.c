#include<stdio.h>

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
			case '1' :	printf("\nEnter the Element you want to Insert : ");
					scanf("%d",&e);
					printf("Enter the position : ");
					scanf("%d",&p);
					for(i=n-1;i>=p-1;i--)
						a[i+1]=a[i];	
					a[p-1]=e;
					n++;
					printf("\nThe Array after Inserion: ");
					for(i=0;i<n;i++)
						printf("%d ",*(a+i));
					break;

			case '2' :	printf("\nEnter the Element you want to Delete : ");
					scanf("%d",&e);
					for(i=0;i<n;i++)
					{	if(a[i]==e)
						{	p=i;
							break;
						}
					}		
	
		
					for(j=p;j<n-1;j++)
						a[j]=a[j+1];	
					n--;
					printf("\nThe Array after Deletion: ");
					for(i=0;i<n;i++)
						printf("%d ",a[i]);
					break;

			case '3' :	printf("\nEnter the Element you want to Search : ");
					scanf("%d",&e);
					p=-1;
					for(i=0;i<n;i++)
					{	if(a[i]==e)
						{	p=i;
							break;
						}
					}
					if(p==-1)
					{	printf("Element not found!\n");
						return -1;								
					}
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
