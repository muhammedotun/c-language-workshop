#include <stdio.h>

int main(){
	int i = 0;
	dongu:
		printf("sayi: %d\n",i);
		i++;
		if(i<10)
			goto dongu;
	printf("bitti");
	return 0;
}
