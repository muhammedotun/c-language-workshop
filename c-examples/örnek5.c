#include <stdio.h>

int main(){
	int n , sonuc=1;
	printf("bir sayı girin: ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
		sonuc*=i;
	printf("%d sayının faktöriyeli: %d\n",n,sonuc);
	return 0;

}
