// #include <stdio.h>

// int main() {
//     int i = 20;
//     if (i % 2 == 0) puts("짝수");
//     else puts("홀수");
//     if (i % 2 == 0) {
//         i *= 2;
//         printf("i의 값은 2의 배수이다.");
//     }
//     else {
//         i /= 2;
//         printf("i의 값은 2의 배수가 아니다.");
//     }
//     return 0;
// }

//////////////////////////////////////////////////

// #include <stdio.h>

// int main() {
//     int a = 10, b = 100, c;
//     if (a > b) {
//         c = 1;}
//     else if (a == b) {
//         c = 2;
//         a *= 100;
//     }
//     printf("a: %d, b: %d, c: %d", a, b, c);
//     return 0;
// }

//////////////////////////////////////////////////

// #include <stdio.h>

// int main() {
//     int sc;
//     scanf("%d", &sc);
//     if (sc > 500) puts("성적조작");
//     else if (sc >= 400) puts("A 등급");
//     else if (sc >= 300) puts("B 등급");
//     else if (sc >= 200) puts("C 등급");
//     else if (sc >= 100) puts("D 등급");
//     else if (sc >= 0) puts("F 등급");
//     else puts("사람아님");
//     return 0;
// }

//////////////////////////////////////////////////

#include <stdio.h>

int main() {
    while (1) {
        int znum;
        printf("주민등록번호 뒤 7자리 입력 > ");
        scanf("%d", &znum);
        znum /= 1000000;
        if (1 <= znum && znum <= 4) {
            if (znum % 2 == 1) puts("남자");
            else puts("여자");
            return 0;
        }
    }
}