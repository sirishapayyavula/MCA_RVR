#include<stdio.h>
#include<conio.h>
void bubbleSort(int x[],int n)
{
 int i,j,temp;
  for(i=0;i<n;i++)
   {
   for(j=0;j<(n-i-1);j++)
     {
      if(x[j]>x[j+1])
       {
         temp=x[j];
         x[j]=x[j+1];
         x[j+1]=temp;
         }
      }
    }
}
main()
 {
   int i,n,x[25];
   printf("enter the number of numbers");
   scanf("%d",&n);
   printf("enter the number");
   for(i=0;i<n;i++)
   scanf("%d", &x[i]);
   bubbleSort(x,n);
   printf ("array after sotrting");
   for(i=0;i<n;i++)
printf("%d",x[i]);
}




