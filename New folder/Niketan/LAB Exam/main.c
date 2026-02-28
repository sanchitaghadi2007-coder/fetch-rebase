#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
  char description[MAX];
  char keyword[100];
  int len;
  gets(description);
  len=strlen(description);
  printf("Enter the keyword to search:\n");
  gets(keyword);
  if (strstr(description,keyword))
    printf("The keyword %s is found in the %s course description.\n",keyword ,description);
  else
    printf("The keyword %s is not found in the %s course description.\n",keyword ,description);

}
