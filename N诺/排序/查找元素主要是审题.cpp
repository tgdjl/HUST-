#include<bits/stdc++.h>
using namespace std;
int main(){
	char ans[305];
	while(scanf("%s",ans)!=EOF){
		int opnum;
		scanf("%d",&opnum);
		char op[105];
		for(int i=0;i<opnum;i++){
			scanf("%s",op);
			int begin;
			if(op[1]<='9'){
				begin=op[1]-'0';
			}
			else{
				begin=op[1]-'a'+10;
			}
			int tmp;
			if(op[2]<='9'){
				tmp=op[2]-'0';
			}
			else{
				tmp=op[2]-'a'+10;
			}
			int end=begin+tmp-1;
			if(op[0]=='0'){
				for(int j=begin;j<begin+tmp/2;j++){
					char tmp1=ans[j];
					ans[j]=ans[begin+end-j];
					ans[begin+end-j]=tmp1;
				}
				printf("%s\n",ans);
			}
			else{
				int posop=3;
				int tmppos=-1;
				char tmp[105];//´æÁÙÊ±ÒÆ³ýµÄÔªËØ
				for(int k=end+1;k<strlen(ans);k++){
					tmp[++tmppos]=ans[k];
				}
				int curans=begin;
				for(int j=3;j<strlen(op);j++){
					ans[curans++]=op[j];
				}
				for(int j=0;j<=tmppos;j++){
					ans[curans++]=tmp[j];
				}
				printf("%s\n",ans);
			}
		}
	}
}
