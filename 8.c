#include<stdio.h>
#include<conio.h>
void sort(int *arr,int s)
{
     int i,j,temp=0;
     for(i=0;i<s;i++)
          temp=temp+*(arr+i);
          printf("sum of the array element is %d",temp);
}
int main()
{
     int arr[10],i,j;
     printf("enter a 10 element of arry\n");
     for(i=0;i<10;i++)
     scanf("%d",(arr+i));
     sort(arr,10);
}
