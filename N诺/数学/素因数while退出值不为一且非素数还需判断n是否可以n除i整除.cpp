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
	while(scanf("%d",&n)!=EOF){
		int count=0;
		while(n%2==0){//化为奇数
			count++;
			n=n/2;
		}
		if(judge(n)==1){
			printf("%d\n",count+1);
			continue;//剩下的真好是个素数
		}
		for(int i=3;i*i<=a;i+=2){
			if(judge(i)==1&&a%i==0){
				while(a%i==0){
					count++;
					a=a/i;
				}
			}
		}
		if(n==1){
			printf("%d\n",count);
			continue;
		}
		printf("%d\n",count+1);	
	}
}
