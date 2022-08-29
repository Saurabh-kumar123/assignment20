#include<stdio.h>
#include<conio.h>
void sort(int *arr,int s)
{
     int i,j,temp;
     for(i=0;i<s;i++);
          for(j=0;j<i/2;j++)
          {
               temp=*(arr+j);
               *(arr+j)=*(arr+i-1-j);
               *(arr+i-1-j)=temp;
          }
}
int main()
{
     int arr[10],i,j;
     printf("enter a 10 element of arry\n");
     for(i=0;i<10;i++)
     scanf("%d",(arr+i));
     sort(arr,10);
     for(i=0;i<10;i++)
     printf("%d ",*(arr+i));
}
