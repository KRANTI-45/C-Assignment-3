/*Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120 */

# include<stdio.h>
int main()
{
int num;
printf("Enter the number: ");
scanf("%d",&num);
int i=1,fact=1;
while(i<=num)
{
fact=fact*i;
i++;
}
printf("Factorial of %d is :%d\n",num,fact);

return 0;
}

