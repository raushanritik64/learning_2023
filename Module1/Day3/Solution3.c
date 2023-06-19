/*

4. Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators

*/
#include <stdio.h>
#include<math.h>

int deleteDigit(int n) {
    int maxNumber = 0;

    for (int i = 0; i < 4; i++) {
        int temp = n / (int) pow(10, i + 1) * (int) pow(10, i) + n % (int) pow(10, i);
        if (temp > maxNumber) {
            maxNumber = temp;
        }
    }

    return maxNumber;
}

int main() {
    int n;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    int largestNumber = deleteDigit(n);

    printf("The largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}

// #include <stdio.h>

// int findLargestByDeletingDigit(int num);

// int main()
// {
//     int num;

//     printf("Enter a 4-digit number: ");
//     scanf("%d", &num);

//     int largestNumber = findLargestByDeletingDigit(num);

//     printf("Largest number by deleting a single digit: %d\n", largestNumber);

//     return 0;
// }

// int findLargestByDeletingDigit(int num)
// {
//     int largestNum = 0;

//     for (int i = 0; i < 4; i++)
//     {
//         int tempNum = num / (int)pow(10, i + 1) * (int)pow(10, i) + num % (int)pow(10, i);

//         if (tempNum > largestNum)
//             largestNum = tempNum;
//     }

//     return largestNum;
// }
