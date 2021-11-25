#include <stdio.h>
int main()
{        int a,b,c;
         printf("Enter the Number=");
         scanf("%d",&a);
         printf("Enter the divisor=");
         scanf("%d",&b);
         while(a>=b){
             a=a-b;
         }
    c=a;     
    printf("The reaminder is = %d",c);
    return 0;
}    
         