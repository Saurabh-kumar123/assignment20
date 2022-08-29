#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
     int c;
     c=*a;
     *a=*b;
     *b=c;
}
int main()
{
     int a,b;
     printf("enter two number\n");
     scanf("%d%d",&a,&b);
     printf("a -> %d\nb -> %d\n",a,b);
     swap(&a,&b);
     printf("a -> %d\nb -> %d",a,b);
     getch();
}
