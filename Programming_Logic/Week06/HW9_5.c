//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n, i;
	int count = 0;
	
//	printf("Enter a number: ");
//	scanf("%d", &n);
//	
//	for(i = 2; i <= n; i *= 2){
//		count++;
//		if(i >= n)
//			break; 
//	}
//	printf("%d", count);

	scanf("%d", &n);
	
	for(i = 2; i <= n; i *= 2){
		if(n >= i)
			count++;
	}
	printf("%d", count);
	
	return 0;
}
