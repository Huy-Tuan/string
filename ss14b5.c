#include <stdio.h>
#include <string.h>

void string(int num){
	char c[100];
	printf("Hay nhap chuoi ki tu ");
	fgets(c, 100, stdin);
	printf("%s", c);
	printf("Hay nhap so dem trong chuoi ");
	scanf("%d", &num);
	int count = 0;
	size_t len = strlen(c);
    if (len > 0 && c[len - 1] == '\n') {
       c[len - 1] = '\0';
    }
	for(int i = 0; i < strlen(c); i++){
		if(' ' == c[i]){
			count++;
		}
	}
	if(num == count){
		printf("correct");
	}else{
		printf("Incorrect");
	}
}
int main() {
	int x;
	string(x);
}