//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(void) {
	 // 변수 정의 - i, sum
	 int i, sum, n;
	 sum = 0;
	 
 	//printf("Enter a number: "); 시험에서는 이런 입력프롬트를 쓰지 않는다
	 scanf("%d", &n);
	 
	 for (i = 1; i <= n; i++) {
		sum += i; // 여기에 BP 설정하고 다음라인(Next line)씩 전진하며 sum의값을 삺펴본다
		if (i % 5 == 0) {
			printf("%d\n", sum);
		}
 	}
}
