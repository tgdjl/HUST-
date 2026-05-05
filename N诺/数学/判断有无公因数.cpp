#include<bits/stdc++.h>
using namespace std;
int judge(int a,int b){
	int max=a>b?a:b;
	int min=a>b?b:a;
	if(max==min||max%min==0){
		return 0;
	}
	for(int i=1;i*i<=min;i++){
		if(min%i!=0){
			continue;
		}
		if(max%i==0&&i!=1){
			return 0;
		}
		if(max%(min/i)==0){
			return 0;
		}
		
	}
	return 1;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int ans[n];
		for(int i=0;i<n;i++){
			scanf("%d",&ans[i]);
		}
		long long count=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(judge(ans[i],ans[j])==1){
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
