/*

2. Prints Bits:
Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators

*/


#include <stdio.h>

void printBits(int n) {
  for (int i = 31; i >= 0; i--) {
    printf("%d", (n >> i) & 1);
  }
}

int main() {
  int n;
  printf("Enter a 32-bit integer: ");
  scanf("%d", &n);

  // Print the bits
  printBits(n);

  printf("\n");

  return 0;
}


// #include <stdio.h>

// void printBits(unsigned int num);

// int main()
// {
//     unsigned int num;

//     printf("Enter a 32-bit integer: ");
//     scanf("%u", &num);

//     printf("Binary representation: ");
//     printBits(num);

//     return 0;
// }

// void printBits(unsigned int num)
// {
//     unsigned int mask = 1 << 31; // Start with the leftmost bit (MSB)

//     for (int i = 0; i < 32; i++)
//     {
//         if (num & mask)
//             printf("1");
//         else
//             printf("0");

//         mask >>= 1; // Shift the mask to the right by 1 bit
//     }

//     printf("\n");
// }
