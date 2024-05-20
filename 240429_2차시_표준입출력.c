#include <stdio.h>
// #define _USE_MATH_DEFINES
// #include <math.h>

// #define pi M_PI

// int main()
// {
//     int r = 7;
//     printf("%f * %d = %f", pi, r, pi * r);
//     return 0;
// }

//////////////////////////////////////////////////

// #define _USE_MATH_DEFINES
// #include <math.h>

// #define pi M_PI

// int main()
// {
//     int r = 7;
//     printf("r<10 : pi*r*r, r>=10 : 2*pi*r > %f", (r < 10) ? pi * r * r : 2 * pi * r);
//     return 0;
// }

//////////////////////////////////////////////////

int main()
{
    int i1, i2, i3;
    scanf("%d %d %d", &i1, &i2, &i3);
    printf("가장 큰 수: %d", (i1 > i2 && i1 > i3) ? i1 : (i2 > i3 ? i2 : i3));
    return 0;
}