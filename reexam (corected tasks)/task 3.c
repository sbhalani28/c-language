#include<stdio.h>
int main(){
    int a=10,b=5,c=1;

    for(int i=1;i<=5;i++){
        printf("%d %d %d ",a--,b--,c++);
    }
}