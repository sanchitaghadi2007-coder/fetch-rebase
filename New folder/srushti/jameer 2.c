#include <stdio.h>
int main()
{
 char first[50], last[50], full[100];
 int i = 0, j = 0, length = 0;
 printf("Enter first name: ");
 scanf("%s", first);
 printf("Enter last name: ");
 scanf("%s", last);
 // Copy first name
 while(first[i] != '\0')
 {
 full[length++] = first[i++];
 }
 // Add space
 full[length++] = ' ';
 // Copy last name
 while(last[j] != '\0')
 {
 full[length++] = last[j++];
}
 // Terminate string
 full[length] = '\0';
 // Output
 printf("Full Name: %s\n", full);
 printf("Length: %d\n", length);
 if(length > 20)
 printf("Name t long for screen.\n");
 else
 printf("Name fits the screen.\n");
 return 0;
}
