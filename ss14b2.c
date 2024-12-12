#include <stdio.h>
#include <string.h>

int main (){
	char c[] = {'N', 'C', 'G', 'H'};
	
	for (int i = 0; i < strlen(c); i++){
		printf("%c ", c[i]);
	}
}