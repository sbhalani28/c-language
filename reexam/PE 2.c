#include<stdio.h>
main()
{
    int marks,maths ,sci, eng, guj,hindi ,percentage,sum=0;
    printf("enter the marks of maths :-\n");
    scanf("%d",&maths);
    
    printf("enter the marks of sci :-\n");
    scanf("%d",&sci);
    printf("enter the marks of eng :-\n");
    scanf("%d",&eng);
    printf("enter the marks of guj:-\n");
    scanf("%d",&guj);
    printf("enter the marks of hindi :-\n");
    scanf("%d",&hindi);

    sum =( maths+eng+sci+guj+hindi);
    percentage=((sum*100)/500); 
    printf("percentage=%d\n",percentage);
    if(percentage>=91 && percentage<=100){
        printf("a1 grade\n");
    }
    else if(percentage>=81 && percentage<=90){
        printf("a2 grade\n");
    }
    else if(percentage>=71 && percentage<=80){
       
        printf("b1 grade\n");
    }
   else if(percentage>=61 && percentage<=70){
        printf("b2 grade\n");
    }
    else if(percentage>=51 && percentage<=60){
        printf("c1 grade\n");
    }
    else if(percentage>=41 && percentage<=50){
        printf("c2 grade\n");
    }
    else if(percentage>=33 && percentage<=40){
        printf("D grade\n");
    }
    else if(percentage>=21 && percentage<=32){
        printf("e1 grade\n");
    }
    else {printf("e2 grade \n");}
    return 0;
    }
