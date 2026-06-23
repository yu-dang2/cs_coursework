//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main() {
    int a, b;
    int result = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    while (a > 0) {
        
        // 현재 a의 뒷부분이 b와 똑같이 끝나는지 확인해야 합니다.
        // a와 b를 직접 건드리면 숫자가 사라지니까, 복사본을 만들어 씁니다.
        int tmp_a = a;
        int tmp_b = b;
        int match = 1; // 일단 맞다고 가정 (1: 참, 0: 거짓)

        // b의 모든 자릿수가 일치하는지 한 자리씩 비교합니다.
        while (tmp_b > 0) {
            if (tmp_a % 10 != tmp_b % 10) {
                match = 0; // 한 자리라도 다르면 꽝!
                break;
            }
            // 다음 자리를 비교하기 위해 10으로 나눕니다.
            tmp_a /= 10;
            tmp_b /= 10;
        }

        // 만약 b의 모든 자릿수가 무사히 일치했다면?
        if (match == 1) {
            result = a; // 지금의 a가 우리가 찾는 정답입니다.
            break;      // 가장 뒤에 있는 b를 찾았으니 바로 탈출!
        }

        // b를 못 찾았다면 a의 마지막 자리를 버리고 다시 반복합니다.
        a /= 10;
    }

    // 3. 결과를 출력합니다.
    // result가 0이면 한 번도 못 찾았다는 뜻입니다.
    printf("%d\n", result);

    return 0;
}
