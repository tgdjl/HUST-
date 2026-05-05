#include<bits/stdc++.h>
using namespace std;
int judge(int a,int b){
	if(a==1||b%a==0) return a;
	int max=1;
	for(int i=1;i*i<a;i++){
		if(a%i!=0){
			continue;
		}
		if(b%i==0){
			max=max>i?max:i;
		}
		if(b%(a/i)==0){
			max=max>i?max:i;
		}
		return max;
	}
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int ans[n];
		for(int i=0;i<n;i++){
			scanf("%d",&ans[i]);
		}
		sort(ans,ans+n);
		printf("%d ",ans[0]);
		printf("%d ",ans[n-1]);
		printf("%d\n",judge(ans[0],ans[n-1]));
	}
	return 0;
}
