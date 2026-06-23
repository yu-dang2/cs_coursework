//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main() {
    int n, i;
    int is_prime = 1; // 1이면 소수, 0이면 소수가 아님

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2)
        is_prime = 0; // 1 이하는 소수가 아님 
	else {
        i = 2;
        while (i * i <= n) { // 효율성을 위해 i를 n의 제곱근까지만 확인
            if (n % i == 0) {
                is_prime = 0; // 나누어떨어지면 소수가 아님
                break;        // 루프 탈출!
            }
            i++;
        }
    }

    // break로 빠져나온 후 여기서 최종 판별
    if (is_prime == 1)
        printf("소수이다.\n");
	else
        printf("소수가 아니다.\n");

    return 0;
}
