#include<bits/stdc++.h>
using namespace std;
struct node{
	char str[1005];
	int empty;//判断是否本来就为空,0空1满 
}a[1005]; 
int main(){
	int pos=0;
	while(fgets(a[pos].str,sizeof(a[pos].str),stdin)!=NULL){
		if(a[pos].str[strlen(a[pos].str)-1]=='\n') a[pos].str[strlen(a[pos].str)-1]='\0';
		a[pos].empty= 0;
		for(int i=0;i<strlen(a[pos].str);i++){
			if(a[pos].str[i]!=' '){
				a[pos].empty=1;
				break;
			}
		}
		pos++;
	}
	int in_comment=0;//不在注释内 
	for(int i=0;i<pos;i++){
		if(a[i].empty==0){
			printf("\n");//原本为空则保留这一行的空格 
			continue;
		}
		int length=strlen(a[i].str);
		char ans[1005];
		int cur=0;
		for(int j=0;j<length;j++){
			if(in_comment==1){
				if((j+1)<length&&a[i].str[j]=='*'&&a[i].str[j+1]=='/'){
					in_comment=0;
					j++;//因为j会自动加一所以加一就好了 
				}	
			}
			else{
				if((j+1)<length&&a[i].str[j]=='/'&&a[i].str[j+1]=='*'){//找到跨行注释 
					in_comment=1;
					j++;//同上，这属于注释，我不要了 
				}
				else if((j+1)<length&&a[i].str[j]=='/'&&a[i].str[j+1]=='/'){//找到单行注释 
					break;//这一行后面不用看了全是注释，直接去判断空不空就好了 
				}
				else{
					ans[cur++]=a[i].str[j];
				}
			}
		}
		ans[cur]='\0';
		int now_empty=0;
		for(int k=0;k<strlen(ans);k++){
			if(ans[k]!=' '){
				now_empty=1;
				continue;
			}
		} 
		if(now_empty==1){
			printf("%s\n",ans);
		}
	
	}
	return 0;
} 
