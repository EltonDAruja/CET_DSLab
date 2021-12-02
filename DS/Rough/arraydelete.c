#include<stdio.h>

int main(){
	int a[100],n,i,e,p,j;
		printf("Enter Array Length : ");
		scanf("%d",&n);
		printf("Enter the Array : ");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		printf("The Array you Entered : ");
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
		
		printf("\nEnter the Element you want to Delete : ");
		scanf("%d",&e);
		for(i=0;i<n;i++)	
		{	if(a[i]==e)
			{	p=i;
				break;
			}
		}		
//		printf("%d%d",p,a[p]);				
		
		for(j=p;j<n-1;j++)
			a[j]=a[j+1];	
		n--;
		printf("The Array after Deletion: ");
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");
	return 0;
}
