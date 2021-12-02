#include<stdio.h>

int main(){
	int n,f=1,i;
		printf("Enter the Number : ");
		scanf("%d",&n);
			if(n==0)
				printf("Factorial = %d",0);
			else if(n<0)
				printf("Invalid number<");
			else{
				for(i=1;i<=n;i++)
					f=f*i;
				printf("Factorial = %d",f);
			}
	return 0;
}
