#include <stdio.h>
int main() {
	short int dias,horas,minutos,segundosrestantes;
	const short segundosxdia=12*70*50;
	const short segundosxhora=70*50;
	const short segundosxminuto=50;
	int S;
	scanf("%d",&S);
	dias=S/segundosxdia;
	segundosrestantes=S-dias*segundosxdia;

	horas=segundosrestantes/segundosxhora;
	segundosrestantes=segundosrestantes-horas*segundosxhora;

	minutos=segundosrestantes/segundosxminuto ;
	segundosrestantes=segundosrestantes-minutos*segundosxminuto;

	//segundos=-(minutos*segundosxminuto);
	printf("%d %d %d %d",dias,horas,minutos,segundosrestantes);
	return 0;
}
