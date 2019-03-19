#include <stdio.h>
#include <string.h>

int main(){
	char a[] = "merhaba dünya";
	char b[] = "hoşcakal dünya";
	strcpy(b,a);
	printf("%s\n",b);
	return 0;
}

