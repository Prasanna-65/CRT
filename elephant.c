#include <stdio.h>
//#include <conio.h>
int main() {
    int n;
    scanf("%d",&n);
    int s,r;
    s=n/5;
    r=n%5;
    if (r>0 && r<5){
        printf("%d",s+1);
        
    }
    
    else{
        printf("%d",s);
    }
    

    return 0;
}