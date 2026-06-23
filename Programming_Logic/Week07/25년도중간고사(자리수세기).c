//컴퓨터학과 20230837 허유정
//#include <stdio.h>
//int main(){
//	int n, i;
//	int a, b, c, d, e;
//	int count = 0;
//	
//	printf("Enter a number: ");
//	scanf("%d", &n);
//	
//	for(i = 1; i <= n; i++){
//		if(n < 10)
//			count = n;
//			
//		else if(n < 100){
//			if(i < 10)
//				count++;
//			else if(i < 100)
//				count += 2;
//		}
//		
//		else if(n < 1000){
//			if(i < 10)
//				count++;
//			else if(i < 100)
//				count += 2;
//			else if (i < 1000)
//				count += 3;
//		}
//	
//		else if(n <= 10000){
//			if(i < 10)
//				count++;
//			else if(i < 100)
//				count += 2;
//			else if(i < 1000)
//				count += 3;
//			else if(i < 10000)
//				count += 4;
//			else if(i <= 10000)
//				count = count + 5;
//		}			
//	}
//	printf("%d", count);
//	
//	return 0;
//} 

#include <stdio.h>

int main() {
    int n, i;
	int count = 0;
	
	//printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i *= 10)
        count += (n - i + 1);
    printf("%d\n", count);
    
    return 0;
}
