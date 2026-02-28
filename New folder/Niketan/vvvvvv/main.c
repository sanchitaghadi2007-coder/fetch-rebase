#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,i,key,high,mid,low,found=0;
    printf("Enter the number of books:");
    scanf("%d",n);
    int books[n];
    printf("Enter the Books IDs in descending order:\n");
     for(i=0;i<n;i++);
    scanf("%d",books[i]);
    printf("Enter the Book ID to search:\n");
    scanf("%d",books[i]);
    low=0;
    high=n-1;
    while(low<=high)
    {
     mid=(high+low)/2;
     if(books[mid]==key)
     {
      found=1;
      break;
     }
   else  if(books[mid]<=0)
       low= mid-1;
     else
       high= mid+1;
    }
    if(found)
        printf("Book is available:\n");
    else
        printf("Book is not available:\n");
}
