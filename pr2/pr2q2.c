#include<stdio.h>
main()
{
    float ammount,unit,charge;
    
    printf("enter the unit\n");
    scanf("%f",&unit);

    if (unit<=50)
    {
        ammount=unit*0.50;

    }else if(unit <=150)
    {
        ammount=25+((unit-50)*0.75);

    }else if (unit<=250)
    {
        ammount=100+((unit-150)*1.20);
    }else if (unit>=250)
    {
        ammount=220+((unit-250)*1.50);
    }charge=ammount*0.20;
      ammount=ammount+charge;
      printf("total bill=%f",ammount);

}