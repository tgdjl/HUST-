#include<stdio.h>
int main(){
	int  num;
	long long ans[71];
	ans[0]=ans[1]=1;
	ans[2]=2;
	for(int i=3;i<=70;i++){
		ans[i]=ans[i-3]+ans[i-2]+ans[i-1];
	}
	while(scanf("%d",&num)!=EOF){
		 printf("%lld\n",ans[num]);
	 }
}
