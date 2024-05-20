// #include <stdio.h>

// int main() {
//     int a = 1;
//     printf("%d\n", a);
//     printf("%d\n", --a);
//     printf("%d\n", a--);
//     printf("%d\n", a);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     // printf("내이름\n");
//     int age, born;
//     printf("출생년도 입력: ");
//     scanf("%d", &born);
//     age = 2024 - born;
//     printf("내나이: %d", age);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     long long number;
//     printf("수 입력: ");
//     scanf("%lld", &number);
//     printf("%lld %lld %lld\n", number++, number++, number++);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int number;
//     printf("번호 입력: ");
//     scanf("%d", &number);
//     // number < 10 ? printf("0%d", number) : printf("%d", number);
//     printf("%02d", number);
//     return 0;
// }

#include <stdio.h>

int main() {
    double number;
    printf("실수 입력: ");
    scanf("%lf", &number);
    printf("%d\n%lf", (int) number, number - (int) number / 1);
    return 0;
}