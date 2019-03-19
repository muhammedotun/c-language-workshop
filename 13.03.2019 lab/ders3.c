#include <stdio.h>
int main(){
	char a[] = "merhaba dünya";
	char b[] = "Hoşçakal";
	int i = 0;
	printf("%s \n",b);
	while(a[i] != '\n' && b[i] != '\0'){
		b[i]=a[i];
		i++;
	}
	printf("%s \n",b);
	return 0;
}
