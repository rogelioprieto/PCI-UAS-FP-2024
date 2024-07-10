#include <stdio.h>
#include <math.h>
int main() {
	float x,y,z,resultado;
	const float PI=3.14159;
	scanf("%f %f %f",&x,&y,&z);
	resultado= (x+x*(y+pow(z,2))) / ( (x+PI)*(y+PI) );
	printf("%f",resultado);
	return 0;
}
