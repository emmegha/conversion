//program to find ASCII value of a character

#include<stdio.h>
#include<conio.h>

void main()

{
  char ch;
  clrscr();
  printf("enter a character \n");
  scanf("%c",&ch);
  printf("ASCII value of %c is %d\n ", ch,ch);

  getch();
  }