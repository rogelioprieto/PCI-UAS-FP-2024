#include <stdio.h>
int main(){
	short int numero;
	scanf("%hd",&numero);
	if(numero%2==0)
		printf("par");
	else
		printf("impar");
	return 0;
}
