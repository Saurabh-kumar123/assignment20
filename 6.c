#include<stdio.h>
#include<conio.h>
int length(char *p)
{
     int i;
     for(i=0;*(p+i);i++);
     return i;
}
int main()
{
     char str[20];
     printf("enter a string\n");
     gets(str);
     printf("length of string is %d",length(str));
     getch();
}
