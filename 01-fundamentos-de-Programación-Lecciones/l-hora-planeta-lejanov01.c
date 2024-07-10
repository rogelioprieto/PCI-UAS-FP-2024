#include <stdio.h>
int main() {
	short int dias,horas,minutos,segundos;
	short segundosxdia=12*70*50;
	short segundosxhora=70*50;
	short segundosxminuto=50;
	int S;
	scanf("%d",&S);
	dias=S/segundosxdia;
	horas=(S-dias*segundosxdia)/segundosxhora;
	minutos=( S-(dias*segundosxdia)-(horas*segundosxhora) ) / segundosxminuto ;
	segundos=S-(dias*segundosxdia)-(horas*segundosxhora)-(minutos*segundosxminuto);
	printf("%d %d %d %d",dias,horas,minutos,segundos);
	return 0;

}
