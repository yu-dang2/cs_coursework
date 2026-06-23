#include <stdio.h>
int main(void)
{
    int num, aw;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 1){       
		aw = num % 2;
		printf("%d", aw);
		
		num = num / 2;
    } 	
}
