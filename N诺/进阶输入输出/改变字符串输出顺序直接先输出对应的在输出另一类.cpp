#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	scanf("%s",c);
	for(int i=0;i<strlen(c);i++){
		if(c[i]<'0'||c[i]>'9'){
			printf("%c",c[i]);
		}
	}
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='0'&&c[i]<='9'){
			printf("%c",c[i]);
		}
	}
	return 0;
}
