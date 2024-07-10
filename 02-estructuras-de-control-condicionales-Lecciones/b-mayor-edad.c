#include <stdio.h>
int main(){
	short int edad;
	scanf("%hd",&edad);
	if(edad>=18)
		printf("Es Mayor");
	else
		printf("Es Menor");
	return 0;
}
