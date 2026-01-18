#include <stdio.h>
int main(){
	int numero;
	
	scanf("%d", &numero);
	
	float resultado = (numero % 2 == 0) && (numero % 5 == 0);
	
	printf("%d\n", resultado);
	
	return 0;
}
