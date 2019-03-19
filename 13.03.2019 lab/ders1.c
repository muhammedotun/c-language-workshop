#include <stdio.h>
int main(){
	char a[] = "merhaba dünya";
	int i=0;
	while(a[i]!='\0'){
		printf("%c",a[i++]);
	}
	printf("\n");
	return 0;
}
