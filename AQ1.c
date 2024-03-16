/*1.
Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
******  */

#include<stdio.h>
int main()
{
int num;
char ch;

 printf("Enter the number: \n");
 scanf("%d",&num);

 printf("Enter the character: \n");
 scanf("%*c%c",&ch);
 int i;
 while(i<num)
 {
 printf("%c",ch);
 i++;
 }
 return 0;
}

