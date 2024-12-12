#include <stdio.h>
#include <string.h>

int main (){
	char c[1000];
	printf("Hay nhap mot chuoi ki tu bat ki ");
	fgets(c, 1000, stdin);
	printf("Do dai chuoi ban vua nhap la: %d", strlen(c));
}