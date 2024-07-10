#include <stdio.h>
int main(){
	short n;
	short int i;
	scanf("%hd",&n); //leer el límite
	for(i=1;i<=n;i++){
		printf("%hd\n",i);
	}
	return 0;
}
