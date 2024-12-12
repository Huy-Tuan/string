#include <stdio.h>
#include <string.h>

void arr(){
	char delet;
	char a[100] = "hello world";
	printf("%s\n", a);
	printf("Hay nhap ki tu muon xoa ");
	scanf("%c", &delet);
	int lenght = strlen(a);
	for(int i = 0; i < lenght; i++){
		if(a[i] == delet){
		for(int j = i; j <lenght; j++){
				a[j] = a[j + 1];
	}
		a[lenght - 1] = '\0';
	 	lenght--;
	 	i--;
	}
}
	printf("%s", a);
}
	
int main(){
	arr();
	return 0;
}
	
