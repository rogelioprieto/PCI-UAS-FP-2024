#include <stdio.h>
int main() {
	short int dias,horas,minutos;
	int segundosrestantes;
	const int segundosxdia=12*70*50;
	const short int segundosxhora=70*50;
	const short int segundosxminuto=50;
	int S;
	scanf("%d",&S);
	dias=S/segundosxdia;
	segundosrestantes=S-dias*segundosxdia;

	horas=segundosrestantes/segundosxhora;
	segundosrestantes=segundosrestantes-horas*segundosxhora;

	minutos=segundosrestantes/segundosxminuto ;
	segundosrestantes=segundosrestantes-minutos*segundosxminuto;

	//segundos=-(minutos*segundosxminuto);
	printf("%hd %hd %hd %d\n",dias,horas,minutos,segundosrestantes);
	return 0;
}
