#include <stdio.h>
int main(){
int a,i,j;
j=1;
printf("Enter your number=");
scanf("%d",&a);
if (a<0)
{printf("factorial Doesn't exist");}
else
    {for (i=1;i<a+1;i++)
        {j*=i;}}
printf("Factorial= %d",j);
return 0;
}
