#include<stdio.h>
struct student{
    int roll no;
    char name[100];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    float percentage;
};
int main(){
    FILE*markSheeetFile;
    markSheetFile=fopen("info.txt","w");
    
    if(markSheetFile==NULL)

    {
        printf("Error opening file.\n");
        return 1;
    }
    struct student students[5];
    printf("Enter marks out of 100");
    int i;
    for(i=0;i<5;i++)
    {
        printf("details of students %d\n"i+1);

        printf("Roll No:-");
        scanf("%d,&student[i].rno");
        printf("Name:-");
        scanf("%d,&student[i].name");
        printf("Physics marks:-");
        scanf("%d,&student[i].phy_marks");
        printf("Chemistry marks:-");
        scanf("%d,&student[i].chem_marks");
        printf("Maths marks:-");
        scanf("%d,&student[i].maths_marks");

        students[i].percentage=(students[i],phy_marks+students[i].chem_marks+students[i].maths_marks)/3.0;

        fprintf(markSheetFILE,"==========================\n");
        fprintf(markSheetFILE,"DETAILS OF STUDENT %D\n",i+1);
        fprintf(markSheetFILE,"roll no:-%d\n",student[i].rollno);
        fprintf(markSheetFILE,"NAME:-%d\n",student[i].name);
        fprintf(markSheetFILE,"PHYSICS:-%d\n",student[i].phy_marks);
        fprintf(markSheetFILE,"MATHS:-%d\n",student[i].maths_marks);
        fprintf(markSheetFILE,"PERCENTAGE:-%2f\n",student[i].percentage);
        fprintf(markSheetFILE"\n");




    }
    fclose(markSheetFILE);
    printf("\n Mark sheet generated and saved in mark_sheet.txt. \n",);

}
