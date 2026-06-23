//컴퓨터학과 20230837 허유정
#include <stdio.h> 
int main(){
	int r;
	double a, c;
	const double PI = 3.141592;
	
	printf("Enter a radius: ");
	scanf("%d", &r);
	
	a = PI * r * r;
	c = 2 * PI * r;
	
	printf("The area of a circle with %d:	%f\n", r, a);
	printf("The circumference of a circle with %d:	%f", r, c);
}
