#include<stdio.h>
#include<string.h>

union demo{
    int id;
    char name[50];
};
int main(){
    union demo d;
    d.id=11;
    strcpy(d.name,"Jay");

    printf("Id:-%d\n",d.id);
    printf("Name:-%s",d.name);
}
