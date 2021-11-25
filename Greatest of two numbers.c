#include <stdio.h>
int main(){
    int a,b;
    printf("Select First number=");
    scanf("%d",&a);
    printf("Select Second number=");
    scanf("%d",&b);
    if (a>b)
        {printf("Greatest number= %d",a);}
    else if (b>a)
        {printf("Greatest number= %d",b);}
    else 
        {printf("Both are euqal");}
    
    return 0;
}