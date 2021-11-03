#include<stdio.h>

int main(){
	int a[100],n,i,e,p;
		printf("Enter Array Length : ");
		scanf("%d",&n);
		printf("Enter the Array : ");
		for(i=0;i<n;i++)
			scanf("%d",(a+i));
		printf("The Array you Entered : ");
		for(i=0;i<n;i++)
			printf("%d ",*(a+i));
		
		printf("\nEnter the Element you want to Insert : ");
		scanf("%d",&e);
		printf("Enter the position : ");
		scanf("%d",&p);
		for(i=n-1;i>=p-1;i--)
			a[i+1]=a[i];	
		a[p-1]=e;
		n++;
		printf("The Array after Inserion: ");
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");
	return 0;
}
