//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n, i;
	int answer;
	int count = 0;
	
	printf("몇 단을 연습하시겠습니까?: ");
	scanf("%d", &n);
	
	for(i=1; i<=9; i++){
		printf("%d * %d = ", n, i);
		scanf("%d", &answer);
		
		if(answer == n*i)
			count += 1;	
	}
	printf("%d단의 구구단에서 %d개를 맞았습니다", n, count);
	
	return 0; 
}
