#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 50
int main()
{

    char array[MAX_LENGTH];

    /*prompt for an input that stops at enter*/
    printf("Enter a string: ");
    scanf("%[^\n]",array);

    /*loop untill we hit the null terminator*/
    for (int i = 0,j; array[i] != '\0'; i++)
    {
        /*while the char we are on is not a leter*/
        while (!(array[i] >= 'a' && array[i] <= 'z') && !(array[i] >= 'A' && array[i] <= 'Z') && !(array[i] == '\0'))
        {
            /*moove it to the end*/
            for (j=i; array[j] != '\0'; j++)
            {
                array[j] = array[j+1];
            }
            /*set the null terminator*/
            array[j]='\0';
        }
     }
     /*print the result*/
     printf("The entered alpha string: %s\n", array);
}
