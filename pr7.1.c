#include<stdio.h>
void add()
{
   int a,b,add;
   printf("enter the number:-");
   scanf("%d",&a);
   printf("enter the number:-");
   scanf("%d",&b);
   add=a+b;
   printf("ans = %d\n",add);
}
void sub(){
    int a,b,sub;
    printf("enter the number:-");
   scanf("%d",&a);
   printf("enter the number:-");
   scanf("%d",&b);
   sub=a-b;
   printf("ans = %d\n",sub);
}
void mul(){
    int a,b,mul;
    printf("enter the number:-");
   scanf("%d",&a);
   printf("enter the number:-");
   scanf("%d",&b);
   mul=a*b;
   printf("ans = %d\n",mul);

}
void div(){
     int a,b,div;
    printf("enter the number:-");
   scanf("%d",&a);
   printf("enter the number:-");
   scanf("%d",&b);
   div=a/b;
   printf("ans = %d\n",div);

}
void mod(){
      int a,b,mod;
    printf("enter the number:-");
   scanf("%d",&a);
   printf("enter the number:-");
   scanf("%d",&b);
   mod=a%b;
   printf("ans = %d\n",mod);
}
main()
{
    int c,n;
    do{
    printf("-------------menu--------------\n");
    printf("press 1 for '+'\n");
    printf("press 2 for '-'\n");
    printf("press 3 for '*'\n");
    printf("press 4 for '/'\n");
    printf("press 5 for '%'\n");
    printf("enter your choice\n ");
    scanf("%d",&c);
    switch(c){
        case 1:
               add();
               break;
        case 2:
               sub() ;
               break;
        case 3:
               mul();
               break;
        case 4:
               div();
               break;
        case 5:
               mod();
               break;

              default:
              printf("you are exited\n");                            
    }

}
while(c !=6);
}

