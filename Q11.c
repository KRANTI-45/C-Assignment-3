//Write a program to find factorial of given number.
#include<stdio.h>
int main()
{ 

int num,i,fact=1;
printf("Enter the num: \n");
scanf("%d",&num);

for (i=1;i<=num;i++)

  {
  fact=fact*i;
  }
  printf("Fcatorial of %d is:%d\n",num,fact);
  return 0;
 }

