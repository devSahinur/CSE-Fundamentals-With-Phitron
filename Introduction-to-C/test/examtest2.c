
#include <stdio.h>
#include <stdbool.h>

bool odd_even()
{
     int number = 5;
    bool check = false;
    if ((number % 2) == 0)
    {
        check = true;
    }
    else
    {
        check = false;
    }
    return check;
}

int main(void)
{
   
    bool result = odd_even();

    if (result)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}