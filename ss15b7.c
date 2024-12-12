#include<stdio.h>
#include<string.h>

void arr(){
	char a[100] = "123#$%^sjdHDJS";
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	
	for (int i = 0; i < strlen(a); i++){
		if (a[i] >= 'a' && a[i] <= 'z') ++cnt1;
		if (a[i] >= 'A' && a[i] <= 'Z') ++cnt1;
		if (a[i] >= '1' && a[i] <= '9') ++cnt2;
		if (a[i] >= ' ' && a[i] <= '/' || a[i] >= ':' && a[i] <= '@' || a[i] >= '[' && a[i] <= '`') ++cnt3;
	}
	printf("So ki tu chu cai trong mang la %d\n", cnt1);
	printf("So ki tu chu so trong mang la %d\n", cnt2);
	printf("So ki tu dac biet trong mang la %d", cnt3);
}
int main (){
	arr();
	return 0;
}
