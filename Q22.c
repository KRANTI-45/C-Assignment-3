/*22. Print following patterns

1.
* * * * *
* * * *
* * *
* *
*




# include<stdio.h>
int main()
{
int i,j;
for (i=0;i<5;i++)
   {
    for (j=5;j>i;j--)
	{
	printf(" * ");
    }
   printf("\n");
}
return 0;
}

*/
/*
2.

*
* *
* * *
* * * *
* * * * *


# include<stdio.h>
int main()
{
int i,j;
for (i=0;i<5;i++)
   {
    for (j=0;j<=i;j++)
	{
	printf(" * ");
    }
   printf("\n");
}
return 0;
}*/
/*
3.
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5



# include<stdio.h>
int main()
{
int i,j;
for (i=0;i<5;i++)
   {
    for (j=0;j<=i;j++)
	{
	printf(" %d ",j+1);
    }
   printf("\n");
   }
   return 0;
}
*/




/*
4.

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1





# include<stdio.h>
int main()
{
int i,j;
for (i=0;i<5;i++)
   {
    for (j=0;j<=i;j++)
	{
	printf(" %d ",(5-j));
    }
   printf("\n");
   }
   return 0;
}

*/
/*
5.
A B C D
B C D
C D
D
*/



# include<stdio.h>
int main()
{
int i,j;
for (i=0;i<5;i++)
   {
    for (j=5;j>i;j--)
	{
	printf(" %c ",('A'));
    }
   printf("\n");
}
return 0;
}


