#include<stdio.h>
int xor(int n){
	if(n%4==1) return ("%d",1);
	if(n%4==2) return ("%d",n+1);
	if(n%4==3) return ("%d",0);
	if(n%4==0) return ("%d",n);
}
int main()
{
	int r,l,x=0;
	printf("Enter thr lower limit:");
	scanf("%d",&l);
	printf("Enter thr upper limit:");
	scanf("%d",&r);
	x=xor(r)^xor(l-1);
	printf("%d",x);
	return 0;
}