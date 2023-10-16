#include<stdio.h>
int main(){
    int i,1=0;
    char str[20],*p;
   
    printf("enter the string:-");
    gets(str);
    p=&str;
    for(i=0;*(p+1)!='\0';i++)
    {
         1=1+1;
    }
    printf("length of string=%d",1);
}