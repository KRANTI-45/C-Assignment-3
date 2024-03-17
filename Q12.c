//Write a program to accept integer values of base and index and calculate power of base to
//index.
#include<stdio.h>
int main()
{ 

int base,index,i;
long double power=1;
printf("Enter the base: \n");
scanf("%d",&base);
printf("Enter the index: \n");
scanf("%d",&index);
// for negative index
for (i=index;i<0;i++)

  {
  power=power/base;
 
  }
  // for positive index
for (i=index;i>0;i--)

  {
  power=power*base;
 
  }
  printf("The power of base %d and index %d is:%Lf\n",base,index,power);
  


  return 0;

 }

