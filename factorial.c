#include<stdio.h>
int main(){
	int i,n,f=1;
	printf("enter the number to find its factorial:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
	}	
	printf("\nfactorial of %d is %d",n,f);
	return 0;
}
