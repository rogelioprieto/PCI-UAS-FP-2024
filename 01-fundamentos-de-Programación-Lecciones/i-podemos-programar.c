#include <stdio.h>
int main() {
	short int hora,minutos,segundos;
	int resultado;
	scanf("%hd %hd %hd",&hora,&minutos,&segundos);
	resultado=hora*60*60+minutos*60+segundos;
	printf("%d",resultado);
	return 0;
}
