#include <stdio.h>
int main() {
	short int  a,b;
	short int suma,resta,producto,residuoentero;
	double cociente;
	scanf("%hd %hd",&a,&b);
	suma=a+b;
	resta=a-b;
	producto=a*b;
	cociente=(double)a/b;
	residuoentero=a%b;
	printf("%hd\n%hd\n%hd\n%.0f\n%hd",suma,resta,producto,cociente,residuoentero);
	return 0;
}
