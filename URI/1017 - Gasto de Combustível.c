#include <stdio.h>
int main(){
	float litros;
	int tempo,velocidade;
	scanf("%d %d",&tempo,&velocidade);
	litros=tempo*velocidade/12.0;
	printf("%.3f\n",litros);
	return 0;
}
