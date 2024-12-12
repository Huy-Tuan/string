#include <stdio.h>
#include <string.h>

int main (){
	char c[] = {'N', 'C', 'G', 'H'};
	
	for (int i = strlen(c); i >= 0; i--){
		printf("%c ", c[i]);
	}
	return 0;
}