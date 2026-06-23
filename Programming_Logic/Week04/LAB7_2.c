//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	char op;
	int n1, n2, total;
	
	printf("Enter an operator: ");
	scanf("%c", &op);
	
	printf("Enter the first operand: ");
	scanf("%d", &n1);
	printf("Enter the second operand: ");
	scanf("%d", &n2);
	
	switch (op){
		case '+':
			total = n1 + n2;
			break;
			
		case '-':
			total = n1 - n2;
			break;
			
		case '*':
			total = n1 * n2;
			break;
			
		case '/':
			total = n1 / n2;		
			break;
	}
	printf("%d %c %d = %d", n1, op, n2, total);
} 
