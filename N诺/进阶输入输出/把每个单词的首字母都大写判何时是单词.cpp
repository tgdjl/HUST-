#include<bits/stdc++.h>
using namespace std;
int main(){
	char ans[105];
	while(fgets(ans,sizeof(ans),stdin)!=NULL){
		if(ans[0]>='a'&&ans[0]<='z'){//Ê××ÖÄ¸×ª´óÐ´
			ans[0]=ans[0]-'a'+'A';
		}
		printf("%c",ans[0]);
		for(int i=1;i<strlen(ans);i++){
			if(ans[i-1]==' '||ans[i-1]=='\t'||ans[i-1]=='\r'||ans[i-1]=='\n'){
				if(ans[i]>='a'){
					ans[i]=ans[i]-'a'+'A';
					printf("%c",ans[i]);
				}
				else{
					printf("%c",ans[i]);
				}
			}
			else{
				printf("%c",ans[i]);
			}
		}
		printf("\n");
	}
}
	
