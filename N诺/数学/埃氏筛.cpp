#include<bits/stdc++.h>
using namespace std;
int maxn=1000005;
int prime[1000005];
void getprime(){
	for(int i=0;i<maxn;i++){
		prime[i]=1;
	}
	for(int i=2;i<maxn;i++){
		if(prime[i]==1){//如果一个数不是素数那他的因子比他小，从二开始一个个过筛 
			for(int j=i*i;j<maxn;j+=i){//从i*i开始，是因为i*（2~i-1）早就被i前面的筛掉了，把i的倍数全是为非素数遍历下去，时间复杂度较大 
				prime[i]=0;
			}
		}
	
	}
}
int main() {
}
