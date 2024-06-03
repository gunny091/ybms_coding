// #include <stdio.h>

// int main() {
//     int a, b, c;
//     scanf("%d %d", &a, &c);
//     switch(a+c) {
//         case 1:
//             printf("항상 참");
//             break;
//         case 10:
//             b = 2 * a + c;
//             break;
//         case 11 ... 100:
//             // scanf("%d", &a);
//             printf("%d", a);
//             break;
//         case 1000:
//             printf("천 번째");
//         default:
//             printf("최대값");
//     }
//     return 0;
// }

//////////////////////////////////////////////////

// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     int sel;
//     while (true) {
//         printf("1부터 5 사이의 정수 입력.\n");
//         scanf("%d", &sel);
//         if (sel > 0 && sel < 6) break;
//         printf("입력오류\n");
//     }
//     return 0;
// }

// //////////////////////////////////////////////////

// #include <stdio.h>

// int main() {
//     int loc;
//     scanf("%d", &loc);
//     switch(loc) {
//         case 2:
//             puts("서울");
//             // break;
//         case 31:
//             puts("경기");
//             // break;
//         case 32:
//             puts("인천");
//             // break;
//         case 44:
//             puts("세종");
//             // break;
//         default:
//             puts("ㅁ?ㄹ");
//     }
//     return 0;
// }

//////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    int n1, n2, sel;
    char symbols[] = {'+', '-', '*', '/', '%'};
    puts("숫자 2개, 계산 종류 입력(1:+, 2:-, 3:*, 4:/, 5:%%)");
    scanf("%d %d %d", &n1, &n2, &sel);
    switch (sel)
    {
    case 1:
        printf("%d + %d = %d", n1, n2, n1 + n2);
        break;
    case 2:
        printf("%d - %d = %d", n1, n2, n1 - n2);
        break;
    case 3:
        printf("%d * %d = %d", n1, n2, n1 * n2);
        break;
    case 4:
        printf("%d / %d = %d", n1, n2, n1 / n2);
        break;
    case 5:
        printf("%d %% %d = %d", n1, n2, n1 % n2);
        break;
    }
    printf("\n");
    return 0;
}