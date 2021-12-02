#include<stdio.h>

int main(){
	int n,a[100],i,sum=0;
		printf("Enter total numbers : ");
		scanf("%d",&n);
		printf("Enter the numbers : ");
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		printf("Sum = %d",sum);
	return 0;
}
