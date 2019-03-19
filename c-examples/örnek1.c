#include <stdio.h>

int main(){
	int a,b;
	printf("iki sayı girin: ");
	scanf("%d %d",&a,&b);
	if(a<b){
		printf("büyük sayı %d\n",b);
	}
	else if(a>b){
		printf("büyük sayı %d\n",a);
	}
	else{
		printf("iki sayı birbirine eşitler\n");
	}
	return 0;
}
