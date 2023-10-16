#include<stdio.h>
main(){
    int i,j,row,col,a[10][10],b[10][10];
    printf("Enter row element :-");
    scanf("%d",&row);
    printf("Enter column element :-");
    scanf("%d",&col);
   
   printf("\n A Matrix:-");
   for(i=0;i<row;i++){
   for(j=0;j<col;j++){
   
    printf("a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);
   }
}
 printf("\n B Matrix:-");
   for(i=0;i<row;i++){
   for(j=0;j<col;j++){
   
    printf("b[%d][%d]",i,j);
    scanf("%d",&b[i][j]);
   }
}
printf("Sum of matrix ");
 for(i=0;i<row;i++){
   for(j=0;j<col;j++){
    printf("%d ",a[i][j]+b[i][j]);
   }
   printf("\n");
 }

}