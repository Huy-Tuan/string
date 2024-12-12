#include <stdio.h>
#include <string.h>

int main (){
	char c[] = {'N', 'C', 'G', 'H', 'H', 'H'};
	int count = 0;
	int s;
	printf("Hay nhap mot ki tu trong string: ");
	scanf("%c", &s);
	
	for(int i = 0; i < strlen(c); i++){
		if(c[i] == s){
			count++;
		}
	}
	printf("So lan xuat hien cua ki tu %c la %d", s, count);
}
	