/*
16. Write a program to develop a very simple version of the ''guess the magic number" game. The
program generates a random magic number between 1 and 1000. Ask user to guess the
number. If guess is correct then print message “congrats! You won.” if the guess is less than
magic number print the message ** left ** otherwise print the message ** right **. Repeat the
procedure till player give accurate guess. Give maximum 10 chances to user.
Note: generates the magic number using the standard random number generator rand( ), which
returns an arbitrary number between 0 and RAND_MAX (which defines an integer value that
is 32,767 or larger). The rand( ) function requires the header <stdlib.h>. */


#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num = 0,generated_number = 0;
    char c = '\0';
    int count = 0;
        do
        {
            generated_number = rand()%1000+1;

//            printf("%d\n",generated_number);
            printf("Give your number\n");
            scanf("%d",&num);
            if(generated_number == num)
              {
                printf("Congrats!You won\n");
                goto here;
               }
            else if(generated_number < num)
            {
                printf("left\n");
                count++;
            }
            else if(generated_number > num)
            {
                printf("right\n");
                count++;
            }
            printf("Your chances remaining are %d\n",10-count);
            if(count == 10)
            {
                count = 0;
                printf("Your 10 guesses done .you lost try again\n");
           here:     printf("Do you want to try again y/n\n");
                scanf(" %c",&c);
            }

        }while( c != 'n');

}
