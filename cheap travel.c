#include<stdio.h>
int main(){
   int a,b,c,d,x,y,z,p;
   scanf("%d %d %d %d",&a,&b,&c,&d);
   x=a/b;
   y=a%b;
   z=x*d;
   p=y*c;
   int s=z+p;
   //printf("%d",s);  
   int min=a*c;
   
   int extra=(x+1)*d;
   if(s<min){
   	min=s;
   } 
   if(extra<min)
   {
   	min=extra;
   }
   printf("%d",min);
   return 0;
}

