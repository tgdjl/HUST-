#include<bits/stdc++.h>
using namespace std;
long long ans1(long long x,long long n){
	if(n==1) return x%233333;
	if(n==0) return 1;
	if(n%2==0){
		long long tmp=ans1(x,n/2)%233333;
		return (tmp*tmp)%233333;
	}
	else{
		long long tmp=ans1(x,n/2)%233333;
		return (tmp*tmp*(x%233333))%233333;
	}
}
int main(){
	long long x,n;
	while(scanf("%lld %lld",&x,&n)!=EOF){
		if(n==0){
			printf("1\n");
			continue;
		}
		printf("%lld\n",ans1(x,n));
	}
}
