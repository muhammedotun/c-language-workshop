#include <stdio.h>

int main(){
	char string[9]= "MeRhAbA";
	int i=0;
	printf("strint: %s\n",string);
	while(string[i] != '\o'){
		if(string[i] >= 'a' && string[i] <='z')
			string[i] = string[i] - ('a'-'A');
		i++;
	}
	printf("string: %s\n",string);
	return 0;
}
