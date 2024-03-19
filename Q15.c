
/* 15. Modify the menu driven program for four function calculator. Add a menu item to choose
option exit. The program continues till user chooses option exit. */


#include<stdio.h>
void main()
{
    int num1 = 0,num2 = 0;
    int choice = 0;
    char c = 0;
    do
    {
      printf("Enter the two numbers to perform the operation\n");
      scanf("%d %d",&num1,&num2);
      printf("Enter the choice \n1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n");
      scanf("%d",&choice);
      if(choice == 1)
          printf("Addition of the two numbers is %d\n",num1+num2);
      else if(choice == 2)
          printf("Subtraction of the two numbers is %d\n",num1-num2);
      else if(choice == 3){
          if(num2 == 0)
          {
              printf("Division is not possible as denominator is zero\n");
              goto here;
          }
          else
              printf("Divison of the numbers is %d\n",num1/num2);
      }
      else if(choice == 4)
          printf("Multiplication of the numbers is %d\n",num1*num2);
     here : printf("If you want to continue y/n\n");
      scanf(" %c",&c);
    }while(c != 'n') ;
}
