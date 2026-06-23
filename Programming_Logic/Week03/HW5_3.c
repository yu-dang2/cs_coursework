//컴퓨터학과 20230837 허유정 
#include <stdio.h>
int main(){
	double celsius, fahrenheit;
	const int BASE = 32;
	const double CONVERSION_FACTOR = 9.0 / 5.0;
	
	printf("Enter a celsius temperature: ");
	scanf("%lf", &celsius);	//double 형식 지정자 -> %lf 주의!! 
	
	fahrenheit = celsius * CONVERSION_FACTOR + BASE;
	
	printf("Fahrenheit Equivalent: %f", fahrenheit);
}
