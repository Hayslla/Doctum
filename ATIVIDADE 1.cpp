#include<stdio.h>
#include <stdlib.h>
int main(){
	
	int num1, num2, num3, num4, soma;
	
	printf("Digite o primeiro n�mero");
	scanf("%d",&num1);
	printf("Digite o segundo n�mero");
	scanf("%d",&num2);
	printf("Digite o terceiro n�mero");
	scanf("%d",&num3);
	printf("Digite o quarto n�mero");
	scanf("%d",&num4);
	
	soma = num1 + num2 + num3 + num4;
	
	printf("%d", soma);
	
	system("pause");
	}
