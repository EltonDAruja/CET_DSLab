#include<stdio.h>

int main(){
	int i,sum=0;
	float avg,a[100],n;
		printf("Enter total numbers : ");
		scanf("%f",&n);
		printf("Enter the numbers : ");
		for(i=0;i<n;i++){
			scanf("%f",&a[i]);
			sum=sum+a[i];
		}
		avg=sum/n;
		printf("Average = %f",avg);
	return 0;
}
