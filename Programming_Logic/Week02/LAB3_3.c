//컴퓨터학과 20230837 허유정 
#include <stdio.h>
int main(void){
	int h, m, t;
	
	printf("Enter hour: ");
	scanf("%d", &h);
	
	printf("Enter minute: ");
	scanf("%d", &m);
	
	t = h * 60 + m;
	printf("Total %d minutes", t);
}
