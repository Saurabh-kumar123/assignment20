#include<stdio.h>
#include<conio.h>
void sort(int *arr,int s)
{
     int i,j,temp;
     for(i=0;i<s;i++)
          for(j=i+1;j<s;j++)
          if(*(arr+i)>*(arr+j))
          {
               temp=*(arr+i);
               *(arr+i)=*(arr+j);
               *(arr+j)=temp;
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
