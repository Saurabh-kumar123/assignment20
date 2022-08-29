#include<stdio.h>
#include<conio.h>
char* swap(char *p)
{
     int i,j;
     char temp;
     for(i=0;i<*(p+i);i++);
     for(j=0;j<i/2;j++)
     {
       temp=*(p+j);
     *(p+j)=*(p+i-j-1);
     *(p+i-j-1)=temp;
     }
     return p;
}
int main()
{
     char a[30];
     printf("enter a string\n");
     gets(a);
     printf("%s",swap(a));
     getch();
}
