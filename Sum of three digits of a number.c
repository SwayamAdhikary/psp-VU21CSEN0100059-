#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g;
    printf("Enter your three digit number=");
    scanf("%d",&f);
    a=f%10;
    b=(f-a)/10;
    c=b%10;
    d=(b-c)/10;
    g=d%10;
    e=a+c+d;
    printf("Sum of three numbers= %d",e);
    return 0;
}