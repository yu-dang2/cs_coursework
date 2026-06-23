//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int r;
	double a;
	const double PI = 3.141592;
	
	printf("Enter a radius: ");
	scanf("%d", &r);
	
	a = PI * r * r;
	
	printf("The area of a circle with %d:	%f", r, a);
}
