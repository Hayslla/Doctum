#include<stdio.h>
#include <stdlib.h>
int main(){

	int salario, resultado;
	printf("Digite o salario");
	scanf("%d",&salario);
	
	resultado = salario * 0.25 + salario;
	printf("%d",resultado);
	
	system("pause");
}
