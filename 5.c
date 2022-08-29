#include<stdio.h>
#include<conio.h>
int swap(int *a,int *b)
{
    return *a>*b?*a:*b;
}
int main()
{
     int a,b;
     printf("enter two number\n");
     scanf("%d%d",&a,&b);
     printf("maximum number is %d",swap(&a,&b));
     getch();
}

