//컴퓨터학과 20230837 허유정
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int num, i;
	srand(time(NULL));
	
	for(i=0; i<5; i++)
		printf("난수 출력: %d\n", rand() % 100);
		//rand() % (개수) + 시작값
	return 0;
}
