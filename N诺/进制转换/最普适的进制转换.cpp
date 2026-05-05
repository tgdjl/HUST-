#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF){
		char a[1000];
		scanf("%s",a);
		long long ans=0;
		long long cur=1;
		for(int i=strlen(a)-1;i>=0;i--){//求出十进制表达；也就是ans
			int tmp;
			if(a[i]>='0'&&a[i]<='9'){
				tmp=a[i]-'0';
			}
			else{
				tmp=a[i]-'A'+10;
			}
			ans=ans+cur*tmp;
			cur=cur*m;
		}
		char b[3000];
		int pos=0;
		while(ans!=0){
			int tmp=ans%n;
			if(tmp>=10){
				b[pos++]=tmp+'a'-10;
			}
			else{
				b[pos++]=ans%n+'0';	
			}
			ans=ans/n;
		}
		for(int i=pos-1;i>=0;i--){
			printf("%c",b[i]);
		}
		printf("\n");
	}
}
