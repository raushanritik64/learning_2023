/*

1. Patern Generator:
Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234    4321
123        321
12            21
1                1

Concepts to be used.
- Loops

*/

// #include <stdio.h>

// void printIncreasing(int n);
// void printSpaces(int n);
// void printDecreasing(int n);

// int main()
// {
//     int n;

//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         printIncreasing(i);
//         printSpaces(n - i);
//         printDecreasing(i);
//         printf("\n");
//     }

//     return 0;
// }

// void printIncreasing(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d", i);
//     }
// }

// void printSpaces(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         printf(" ");
//     }
// }

// void printDecreasing(int n)
// {
//     for (int i = n; i >= 1; i--)
//     {
//         printf("%d", i);
//     }
// }

#include<stdio.h>
int main()
{
  for(int i=5;i>=1;i--)
  {
    for(int j=1;j<=4;j++)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    }
    for(int j=5;j>=1;j--)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    } 
    printf("\n");
  }
  return 0;
}