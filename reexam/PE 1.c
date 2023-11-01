#include<stdio.h>
void main(){
    
    char ch;
    printf("enter the character:-\n");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z' ||ch>='A' && ch<='Z')
    {printf("alphabet");}
    else if(ch>='0' && ch<='9'){
        printf("number");
    }
    else
    {printf("special character");}
    return 0;
}
    
