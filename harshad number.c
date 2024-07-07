#include<stdio.h>
int main(){
	int n,b,sum=0;
	scanf("%d",&n);
	int temp=n;
	while(n!=0){
	
	b=n%10;
	sum=sum+b;
	n=n/10;
	
}	
if(temp%sum==0)

	printf("%d",sum);

else
	printf("%d",-1);

	return 0;
	
}