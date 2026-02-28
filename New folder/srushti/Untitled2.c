#include<stdio.h>
void main()
{
int choice id;
printf("---kyc verification system---");
printf("1.pan number.\n");
printf("2.aadar number.\n");
printf("3.appar number.\n");
printf("4.driving licence.\n");
printf("5.passport.\n");
printf("enter the choice number(1-5):")
scanf("%d".choice);
switch(choice)
{
case 1://pan number
    printf("pan verified\n");
break
case 2://aadar number
    printf("aadar verified\n");
    break
case 3://aapar number
    printf("aapar verified\n");
    break
case 4://driving licenc
    printf("driving verified");
    break
case 5://passport
    printf("passport verified");
    break
}
return 0;
}
