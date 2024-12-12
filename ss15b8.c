#include <stdio.h>
#include <string.h>

void arr(){
	char a[100] = "hello world";
	
	for(int i = 0; i < strlen(a); i++){
		if(i == 0 || a[i-1]==' '){
			if(a[i] >= 'a' && a[i] <= 'z'){
				a[i] = a[i]-32;
			}
		}
		else {
			if(a[i] >= 'A' && a[i] <= 'Z'){
			a[i] = a[i] +32;
		}
		}
	}
	printf("%s", a);
}
int main (){
	arr();
	return 0;
}
