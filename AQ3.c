/*3.
Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20 


# include<stdio.h>
int main()
{
int num ,rem,sum=0;
printf("Enter the num:  ");
scanf("%d",&num);
while(num!=0)
{
 rem=num%10;
 sum=sum+rem;
 num=num/10;
 }
 printf("Sum of digit is:%d\n",sum);
return 0;
}
*/

/* b. Reverse the number
Input: 9362
Output: 2639 

# include<stdio.h>
int main()
{
int num ,rem,rev=0;
printf("Enter the num:  ");
scanf("%d",&num);
while(num!=0)
{
 rem=num%10;
 rev=rev*10+rem;
 num=num/10;
 }
 printf("Reverse num is:%d\n",rev);
return 0;
}
*/
/*

c. Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome



# include<stdio.h>
  int main()
  {
  int num ,rem,rev=0,original;
  printf("Enter the num:  ");
  scanf("%d",&num);
  original=num;   
  while(num!=0)
  {
   rem=num%10;
   rev=rev*10+rem;
   num=num/10;
   }
 if(original==rev)
   {
   printf("%d is the palindrome:\n",original);
   }
   else
   {
   printf("%d is not a palindrome:\n",original);
  }
  return 0;
  }
*/

/*

. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number
*/



# include<stdio.h>
# include<math.h>
int main()
  {
  int num ,rem,rev=0,result,power,sum=0;
  printf("Enter the num:  ");
  scanf("%d",&num);
 
  while(num!=0)
  {
   rem=num%10;
   rev=rev*10+rem;
   num=num/10;
   result=pow(rev,rev);
   //sum=sum+result;
   }

   printf("%d",result);
   
  return 0;
  }


