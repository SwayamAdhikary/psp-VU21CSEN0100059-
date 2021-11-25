#include <stdio.h>
int main(){
    int a,b,c=1;
    printf("Choose your number=");
    scanf("%d",&b);
    for (a=1 ; a<=b ;++a){
        c=c*a;
    }
    printf("%d", c);
    return 0;
}        
