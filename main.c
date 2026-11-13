#include <stdio.h>
#include <stdlib.h>

int main()
{
    int robux, type;
    float result;

    printf("Insert the amount you got: ");
    scanf( "%d", &robux);
    printf("Type of sale: (1 for sale in your own game, 2 for sale in a third party game): ");
    scanf( "%d", &type);

    if (robux <= 0 || type != 1 && type != 2)
        {
            printf("Please insert a valid value\n");
        }
    else if (type == 1)
        {
            result = robux * 0.70;
            printf("The value of robux you will receive will be: %.2f\n", result);
            if (result >= 30000)
                {
                printf("You can do DevEx with this value\n");
                }
        }
    else if (type == 2)
        {
            result = robux * 0.60;
            printf("The value of robux you will receive will be: %.2f\n", result);
            if (result >= 30000)
                {
                    printf("You can do DevEx with this value\n");
                }
        }

    system("pause");
    return 0;
}