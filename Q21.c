/* 21. Write a program to display First 5 prime numbers after a given number.
Input: 7
Output: 11 13 17 19 23 */

#include <stdio.h>
int main(){
    int i, num, count;
    int n;
    int count2 = 0;
   
    printf("Enter the first number:\n");
    scanf("%d",&n);
    count2 = 0;
    for (num = n; num <= 100; num++)
	{
            count = 0;
        for (i = 2; i <= num/2; i++)
		{
            if (num % i == 0)
			{
                count++;
                break;
            }
        }

        // Checking and Printing Prime Numbers
        if (count == 0 && num != 1)
		{
            printf("%d\n", num);
            count2++;
        }

        if(count2 == 5)
        break;
    }
    return 0;
}
