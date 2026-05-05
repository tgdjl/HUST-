#include<bits/stdc++.h>
using namespace std;
int judge(int a){
	if(a==0||a==1) return 0;
	for(int i=2;i*i<=a;i++){
		if(a%i==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	char a[105];
	while(scanf("%s",a)!=EOF){
		char b[105];
		int cur=0;
		for(int i=0;i<strlen(a);i++){
			if(a[i]>='0'&&a[i]<='9'){
					b[cur++]=a[i];
			}
		}
		if(cur==0){
			printf("0\n");
			continue;
		}
		int tmp=0;
		for(int i=0;i<cur;i++){
			tmp=tmp*10+b[i]-'0';
		}
		if(tmp==0){
			printf("0\n");
			continue;
		}
		int max=1;
		for(int i=2;i*i<=tmp;i++){
			if(tmp%i!=0){
				continue;
			}
			if(judge(i)==1){
				max=max>i?max:i;
			}
			if(judge(tmp/i)==1){
				max=max>tmp/i?max:tmp/i;
			}
			
		}
		if(max==1){
			printf("%d\n",tmp);
		}
		else{
			printf("%d\n",max);
		}
	}
}
