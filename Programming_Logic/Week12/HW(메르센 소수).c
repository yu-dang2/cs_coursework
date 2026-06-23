//컴퓨터학과 20230837 허유정 
#include <stdio.h>

//2 의 n 승을 반환하는 함수
int pow(int a, int b) // LAB 의 pow 함수를 *그대로* 사용하되 필요하면 일부 변수를 long long 으로
{
	int power = 1;
	int i;
	
	for(i = 0; i < b; i++)
		power *= a;
		
	return power - 1;
}
// x 가 소수이면 1 을 아니면 0 을 반환하는 함수
int isPrime(int x) // LAB 의 isPrime 함수를 *그대로* 사용하되 필요하면 일부 변수를 long long 으로
{
	int i, prime = 1;
	
	for(i = 2; i < x; i++) {
		if(x % i == 0) {
			prime = 0;
			break;
		}
	}
	
	return prime;
}

int main(void)
{
	int num, i;
	int power = 1, prime = 1;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i = 2; i <= num; i++) {
		power = pow(2, i) ;
		prime = isPrime(power);
		
		if(prime)
			printf("(2^%d - 1) = %d은 메르센 소수이다\n", i, power);
	}

	return 0;	
}
