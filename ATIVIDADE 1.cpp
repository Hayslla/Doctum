#include<stdio.h>
#include <stdlib.h>
int main(){
	
	int num1, num2, num3, num4, soma;
	
	printf("Digite o primeiro número");
	scanf("%d",&num1);
	printf("Digite o segundo número");
	scanf("%d",&num2);
	printf("Digite o terceiro número");
	scanf("%d",&num3);
	printf("Digite o quarto número");
	scanf("%d",&num4);
	
	soma = num1 + num2 + num3 + num4;
	
	printf("%d", soma);
	
	system("pause");
	}
