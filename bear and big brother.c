#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int c=0;
	while(x<y || x==y)
	{
	x=x*3;
	y=y*2;
	c++;
	
	
	}
	printf("%d",c);
	
	return 0;
}