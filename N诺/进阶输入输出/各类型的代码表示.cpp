#include<stdio.h>//int£º%d;float:%f;long long :%lld;double:%lf 
#include<string.h>
int main(){
	int num;
	scanf("%d",&num);
	long long ans[num+1];
	ans[1]=1;
	for(long long i=2;i<=num;i++){
		ans[i]=ans[i-1]*i;
	}
	long long sum=0;
	for(long long i=1;i<=num;i++){
		sum+=ans[i];
	}
	printf("%lld",sum);
		
	
}
