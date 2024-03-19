//  Write a program to print the tables of the numbers from 1 to 10. 

#include<stdio.h>
int main()
{
  printf("Printing the tables from the 1 to 10\n");
  for(int i = 1;i<=10;i++)
  {
     printf("Table of %d\n",i);
     for(int j = 1;j<=10;j++)
     {
       printf("%dX%d = %d\n",i,j,i*j);
     }
     printf("\r\n");

  }
}
