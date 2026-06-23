#include <stdio.h>
int main(){
	int m, n, i, j;
	int sum = 0;
	int is_prime;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &m, &n);
	
	for(i = m; i <= n; i++){
		is_prime = 1;
		 
		for(j = 2; j * j <= i; j++){
			if(i % j == 0){
				is_prime = 0;
				break;	
			}
		}
		if(is_prime == 1)
			sum += i;
	}
	printf("%d", sum);
	
	return 0;
}

//#include <stdio.h>
//int main(void) {
//    int a;
//    int b;
//    int i, j;
//    int sum = 0;
//    int is_prime;
//    
//    scanf("%d %d", &a, &b);
//    printf("%d", a + b);
//    
//    	for(i = a; i <= b; i++){
//		is_prime = 1;
//		 
//		for(j = 2; j * j <= i; j++){
//			if(i % j == 0){
//				is_prime = 0;
//				break;	
//			}
//		}
//		if(is_prime == 1)
//			sum += i;
//	}
//	printf("%d", sum);
//    
//    return 0;
//}
