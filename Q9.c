/* 9. Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3
Input:
no1: 123
no2:36
Output:
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
GCD of 123 and 36 is 3 */




#include<stdio.h>
void main()
{
  int k=0,l=0,m=0,GCD = 0;
  printf("Enter the numbers: ");
  scanf("%d %d",&k,&l);
  m = k%l;
  k =l;
  l = m;
  while((k%l)>0)
  {
    m = k%l;
    k = l;
    l = m;
  }
  GCD = l;
  printf("GCD of two numbers %d\n",GCD);
}
