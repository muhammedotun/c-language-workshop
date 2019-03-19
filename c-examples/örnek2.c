#include <stdio.h>

int main(){
	int a;
	printf("bir sayı gir: ");
	scanf("%d",&a);
	if(a==0){
		printf("girilen sayı sıfır");
	}
	else if(a<0){
		printf("girilen sayı negatif");
	}
	else
		printf("girilen sayı pozitif");
	return 0;
}
