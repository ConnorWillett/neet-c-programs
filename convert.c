#include <stdio.h>

void hex(int);
void bin(int);
int main(void)
{
    /* we ask for a number to convert */
    int decimal_Number;

    printf("Enter number : ");
    scanf("%d", &decimal_Number);
    /* function calls */
    hex(decimal_Number);
    bin(decimal_Number);
}


/* making the function that changes the number to hexa decimal */

void hex(int decimal_Number)
{
    int i = 1, j, temp;
    char hexa_Number[100];

    /* if decimal number is not equal to zero then enter in to the loop and execute the statements */
    while (decimal_Number != 0) {
        temp = decimal_Number % 16;

        /* converting decimal number in to a hexa decimal number using aski codes */
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa_Number[i++] = temp;
        decimal_Number = decimal_Number / 16;
    }
    /* printing the hexa decimal number */
    printf("Hexadecimal value is: 0x");
    for (j = i - 1; j > 0; j--)
    {
        printf("%c", hexa_Number[j]);
    }
    printf("\n");
}
/* we make the function to print the binary */
void bin(int binary_Number)
{
    /* if the number is 0 it prints 0 */
    if(binary_Number == 0)
    {
        printf("0");
    }

    /* define the dvariables */
    int shownNum[32];
    int i=0;

    /* converts the number to binary */
    while (binary_Number > 0)
    {
        shownNum[i++] = binary_Number % 2;
        binary_Number /= 2;
    }

    /* print out the binary number */
    printf("The binary value is: b");
    for(int j = i-1; j >= 0; j--)
    {
        printf("%d", shownNum[j]);
    }
    printf("\n");
}

