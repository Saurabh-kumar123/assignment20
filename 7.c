#include<stdio.h>
#include<conio.h>
void length(char *p)
{
     int i,vowel=0,consonent=0;
     for(i=0;*(p+i);i++)
     if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
          vowel++;
     else
          consonent++;
     printf("vowel is -> %d\nconsonent is -> %d",vowel,consonent);
}
int main()
{
     char str[20];
     printf("enter a string\n");
     gets(str);
     length(str);
     getch();
}
