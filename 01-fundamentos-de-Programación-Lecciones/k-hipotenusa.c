#include <stdio.h>
#include <math.h>
int main() {
	double cateto1,cateto2,hipotenusa;
	scanf("%lf",&cateto1);
	scanf("%lf",&cateto2);
	hipotenusa=sqrt(pow(cateto1,2)+pow(cateto2,2));
	printf("%.2lf",hipotenusa);
	return 0;
}
