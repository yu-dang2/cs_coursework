//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	int income[] = {11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66};
	int target;
	int i, month = 0;
	
	printf("탐색할 수입은? ");
	scanf("%d", &target);
	
	for(i = 0; i <= 12; i++){
		if(income[i] == target){
			month = i + 1;
			break;
		}
	}
	
	if(month != 0)
		printf("수입 %d를 갖는 첫번째 달은 %d월입니다\n", target, month);
	else
		printf("수입 %d를 갖는 달은 없습니다\n", target);
	
	return 0;
}
