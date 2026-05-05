#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	fgets(c, sizeof(c), stdin);
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='A'&&c[i]<='W'){
			printf("%c",c[i]+3);		
		}
		else if(c[i]=='X'){
			printf("A");
		}
		else if(c[i]=='Y'){
			printf("B");
		}
		else if(c[i]=='Z'){
			printf("C");
		}
		else if(c[i]>='a'&&c[i]<='w'){
			printf("%c",c[i]+3);		
		}
		else if(c[i]=='x'){
			printf("a");
		}
		else if(c[i]=='y'){
			printf("b");
		}
		else if(c[i]=='z'){
			printf("c");
		}
		else{
			printf("%c",c[i]);
		}
	}
	return 0;
}
 // 无限循环读取，直到fgets返回NULL（EOF）
    //while (fgets(str, sizeof(str), stdin) != NULL) {
        // 第一步：去除fgets读取的换行符（关键）
      //  if (strlen(str) > 0 && str[strlen(str)-1] == '\n') {
        //    str[strlen(str)-1] = '\0';
        //}
