#include <stdio.h>

#define SECOND_START 1
#define SECOND_LIMIT 9
#define FIRST_START 2
#define FIRST_LIMIT 9

#define INPUT

void googoodan(int first, int secondStart, int SecondEnd)
{
    printf("%d단\n", first);
    for (int secondNum = secondStart; secondNum <= SecondEnd; secondNum++)
    {
        printf("%d X %d = %d\n", first, secondNum, secondNum * first);
    }
}

int main()
{
#ifdef INPUT
    int firstNum;
    scanf("%d", &firstNum);
    googoodan(firstNum, SECOND_START, SECOND_LIMIT);
#else
    for (int firstNum = 2; firstNum <= FIRST_LIMIT; firstNum++)
    {
        googoodan(firstNum, SECOND_START, SECOND_LIMIT);
        printf("\n");
    }
#endif
    return 0;
}