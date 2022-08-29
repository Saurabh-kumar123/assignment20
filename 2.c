#include<stdio.h>
#include<conio.h>
void swap(char **p,char **q)
{
     char *temp;
     temp=*p;
     *p=*q;
     *q=temp;
}
int main()
{
     char *a[30],*b[30];
     printf("enter a two string\n");
     gets(a);
     gets(b);
     printf("%s  %s\n",a,b);
     swap(&a,&b);
     printf("%s  %s",a,b);
     getch();
}
