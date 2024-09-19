#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 11
void main(void)
{
    /*make the arrays*/
    char fname[50];
    char lname[50];
    char pin[5];
    char login[MAX_LENGTH];
    printf("Enter User First Name: ");
    scanf("%s", fname);
    printf("Enter User Last Name : ");
    scanf("%s", lname);
    printf("Enter User PIN       : ");
    scanf("%s", pin);
   
    /*get the array lengths if they are too big we shrink them*/
    int last_len = strlen(lname);

    int first_len = strlen(fname);

    int pin_len = strlen(pin);
 
    if(last_len > 4)
    {
        last_len = 4;
    }

    if(first_len > 2)
    {
        first_len = 2;
    }

    if(pin_len > 4)
    {
        pin_len = 4;
    }

    /* each section we add the arrays to the big array*/
    int l_len = 0;
    int incr = 0;
 //last name
    for(int j = 0; j < last_len; j++)
    {
        login[j] = lname[j];
        incr++;
        
    }  
    l_len += incr; 
    incr = 0;
    //first name
    for(int k = 0; k < first_len; k++)
    {
        login[k+l_len] = fname[k];
        incr++;
    }
    l_len += incr;
//pin
    for(int cont = 0; cont < pin_len; cont++) 
    {
        login[cont + l_len] = pin[cont];
    } 
/*print the array*/
    printf("Your login is %s\n", login);
    
}










