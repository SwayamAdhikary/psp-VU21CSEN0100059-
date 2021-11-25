#include <stdio.h>
#include <ctype.h>
int main(){
    int j=0,c;
    char str[25];
    printf("Enter string=");
    scanf("%s",str);
    char ch;
    printf("Select 1 form Upper to Lower and 2 for Lower to Upper");
    scanf("%d",&c);
    switch(c){
    case 1:
           while (str[j]){
               ch= str[j];
               putchar(tolower(ch));
               j++;
               
           }
    case 2:
           while (str[j]){
               ch= str[j];
               putchar(toupper(ch));
               j++;
               
           }
    }
    
}