#include<bits/stdc++.h>
using namespace std;
//一个数对负数取余 a=s*（-x）+yushu,余数与a同号且绝对值小于x
//当余数为负数，需要修改，填上1且对原数加-2
//所有转化为负数进制都这样，若余数是正数，不变，否则改为jinzhi-该余数，同时给原数字加上所加上的负数
int main(){
	int n;
	int jinzhi=2;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			printf("0\n");
			continue;
		}
		char ans[4000];
		int pos=0;
		while(n!=0){
			int tmp=n%(-jinzhi);
			if(tmp>=0){
				ans[pos++]=tmp+'0';
				n=n/-jinzhi;
			}
			else{
				ans[pos++]='0'+jinzhi+tmp;
				n=n-(jinzhi+tmp);
				n=n/-jinzhi;
			}
		}
		for(int i=pos-1;i>=0;i--){
			printf("%c",ans[i]);
		}
		printf("\n");
	}
	return 0;
}
