#include<stdio.h>

int findsmallest(int arr[],int a)
{
    int smallest=arr[0];
    
    for(int i=0;i<9;++i)
    {
        if(arr[i]<smallest)
         {
            smallest=arr[i];
         }
    }
    return smallest;
}

int findlargest(int arr[],int a)
{
    int largest=arr[0];
    for(int i=0;i<9;++i)
    {
        if (arr[i]>largest)
          {
            largest=arr[i];
          }

        return largest;  
    }
}
int main()

{
   int a[50],i,n;

   printf("\nEnter Number of Element:");
   scanf("%d",&n);

   for(i=0;i<n;i++)
     {
        printf("Entre number[%d]:",i+1);
        scanf("%d",&a[i]);
     }

     int smallest=findsmallest(a,n);
     int largest=findlargest(a,n);

     printf("\nThe smaleest number is=%d\n",smallest);
     printf("\nThe largest number is=%d\n",largest);

     return 0;

}