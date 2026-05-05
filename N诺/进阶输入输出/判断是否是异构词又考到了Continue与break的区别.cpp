#include<stdio.h>
#include<string.h>
int main(){
	int a;
	scanf("%d",&a);
	char b[100];
	char c[100];
	int bcount[26];
	int ccount[26];
	while(scanf("%s %s",b,c)!=EOF){
		int judge=0;
		for(int i=0;i<26;i++){
			bcount[i]=ccount[i]=0;
		}
		if(strlen(b)!=strlen(c)){
			printf("No\n");
			continue;
		}
		for(int i=0;i<strlen(b);i++){
			bcount[b[i]-'a']++;
		}
		for(int i=0;i<strlen(c);i++){
			ccount[c[i]-'a']++;
		}
		for(int i=0;i<26;i++){
			if(bcount[i]!=ccount[i]){
				judge=1;
				break;
			}
		}
		if(judge==1) printf("No\n");
		else printf("Yes\n");
	
		
	}
}
