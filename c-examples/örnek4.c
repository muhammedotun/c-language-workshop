#include <stdio.h>

int main(){
	float fiyat;
	printf("bir fiyat girin: ");
	scanf("%f",&fiyat);
	fiyat+=fiyat*0.18;
	printf("kdvli dahil: %.1f\n",fiyat);
	return 0;
}
