#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("do you agree? ");

    if (c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'N')
    {
        printf("Not Agreed.\n");
    }
}