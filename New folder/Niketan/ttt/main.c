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
printf("Enter the balance for account2:%d\n");
scanf("%d",&balance2);
printf("\n Before swapping:%d\n");
printf("Account1 for balance:%d\n",balance1);
printf("Account2 for balance:%d\n",balance2);
swap(&balance1,&balance2);
printf("\n After swapping:%d\n");
printf("Account1 for balance:%d\n",balance1);
printf("Account2 for balance:%d\n",balance2);
}

