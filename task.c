#include <stdio.h>
int main()
{
    int num;
    printf("Type a number: \n"); // Ask the user to type a number
    scanf("%d", &num);           //  Get the number
                                 //"%d" is a format specifier for integer number
    switch (num % 2)             // The expression tests if the number divisible by 2 or not
    {                            // It has two cases => 0  or  1
    case 0:                      // if (num%2 == 0) => it is even number
        printf("Your number is: %d and it is even number", num);
        break;
    case 1: // if (num%2 == 1) => it is odd number
        printf("Your number is: %d and it is odd number", num);
        break;
    }

    return 0;
}