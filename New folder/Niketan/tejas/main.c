#include <stdio.h>
#include <stdlib.h>
void swap(int*a,int*b)
{
int temp=*a;
*a=*b;
*b=temp;
}
void main()
{
int balance1,balance2;
printf("Enter the balance for account1:%d\n");
scanf("%d",&balance1);
printf("Enter the  balance for account2:%d\n");
scanf("%d",&balance2);
printf("\n Before swapping:%d");
printf("Account 1 for balance:%d%d\n ");
printf("Account 2 for balance:%d%d\n");
swap(& balance1,& balance2);
printf("\n After swapping:%d");
printf("Account 1 for balance:%d%d\n ");
printf("Account 2 for balance:%d%d\n");
}
