#include<stdio.h>
#include<string.h>
int main(){
	char ans[100];
	scanf("%s",ans);
	int length=strlen(ans);
	for(int i=0;i<length;i++){
		if((ans[i]>='A'&&ans[i]<='Z')||(ans[i]>='a'&&ans[i]<='z')){
			printf("%c",ans[i]);
		}
	}
	printf("\n");
	for(int i=0;i<length;i++){
		if(ans[i]>='0'&&ans[i]<='9'){
			printf("%c",ans[i]);
		}
	}
	printf("\n");
	for(int i=0;i<length;i++){
		if(ans[i]<'0'||(ans[i]>'9'&&ans[i]<'A')||(ans[i]>'Z'&&ans[i]<'a')||ans[i]>'z'){
			printf("%c",ans[i]);
		}
	}
	return 0;
}
//记住顺序 0-9 A-Z a-z,大小写之间差了32 
