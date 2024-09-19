#include <stdio.h>
#define MAX_LENGTH 10

void main(void)
{
    /*set the vars*/
    int a_len;
    float array[MAX_LENGTH];

    /*array input*/
    for(int i=0; i < MAX_LENGTH; i++)
    {
        printf("Enter interger # %d: ",i+1);
        scanf("%f",&array[i]);
        a_len = i; 
        if(array[i] < 0)
        {
            break;
        }
    }

    /*print the origunal array*/
    printf("Entered array is : ");
    for(int k = 0; k <= a_len; k++)
    {
        printf("%.2f ",array[k]);
    }
/*this loop rearages the array*/
    int temp;
    for(int j = (a_len - 1); j >= 0 ;j--)
    {
       
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
    }

    /*print the new array*/ 
    printf("\nModified array is: ");
    for(int k = 0; k <= a_len; k++)
    {
        printf("%.2f ",array[k]);
    }

    printf("\n");

} 
