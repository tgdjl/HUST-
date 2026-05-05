#include<stdio.h>
#include<string.h>
int main(){
	char a;
	char c[100];
	int length=-1;
	while(scanf("%c",&a)!=EOF&&a!='\n'){
		length++;
		c[length]=a;
	}
	char ans[length+2];
	ans[length+1]='\0';
	for(int i=0;i<=length;i++){
		ans[i]=c[length-i];
	}
	printf("%s",ans);
}
