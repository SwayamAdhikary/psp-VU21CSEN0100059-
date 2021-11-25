#include <stdio.h>
int main()
{
    int a,c,d,b ;
         printf("Enter First Angle=");
         scanf("%d",&a);
         printf("Enter Second Angle=");
         scanf("%d",&b);
         c=180-(a+b);
         if (c>0)
            printf("Third Angle= %d",c);
         else
            printf("Values are invalid");
    return 0;
}    
         