#include<stdio.h>
main()
{
    char[50],alphabet=0,digit=0,spl=0;
    printf("enter the character:-");
    scanf("%c",&ch);

    if(ch>='a' && 'z' || ch<='A' && 'Z')
    {
        alphabet ++;

    }
    else if(ch>='0' && ch<='9')
    {
        digit++;
    }
    else{
        spl++;
    }
    return 0;
}