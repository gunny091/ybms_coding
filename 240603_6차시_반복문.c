#include <stdio.h>

#define FIRST_START 2
#define FIRST_LIMIT 99
#define SECOND_LIMIT 1
#define SECOND_LIMIT 99

int main()
{
    for (int firstNum = 2; firstNum <= FIRST_LIMIT; firstNum++)
    {
        printf("%d단\n", firstNum);
        for (int secondNum = 1; secondNum <= SECOND_LIMIT; secondNum++)
        {
            printf("%d X %d = %d\n", firstNum, secondNum, secondNum * firstNum);
        }
        printf("\n");
    }
    return 0;
}