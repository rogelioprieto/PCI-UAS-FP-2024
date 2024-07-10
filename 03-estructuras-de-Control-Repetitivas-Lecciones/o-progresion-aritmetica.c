#include <stdio.h>
int main(){
	short int A,B,N,i; //A valor inicial, B incremento,
				//N los términos
	short int numero,resultado;
	scanf("%hd %hd %hd",&A,&B,&N); //leer valores
	numero=A;
	resultado=0;
	for(i=0;i<N;i++){
		//printf("i=%d\n",numero);
		resultado+=numero; //resultado=resultado+numero.
		numero=numero+B;

	}
	printf("%hd",resultado);
	return 0;
}
