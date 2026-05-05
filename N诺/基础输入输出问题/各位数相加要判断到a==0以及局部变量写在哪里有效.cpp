#include<stdio.h>
int judge(int a){
	int ans=0;
	int tmp=a;
	while(a!=0){
		int tmp1=a%10;
		ans+=tmp1*tmp1*tmp1;
		a=a/10;
	}
	if(tmp==ans) return 1;
	else return 0;
}
int main(){
	int a,b;
	int ans[1000];
	for(int i=100;i<1000;i++){
		if(judge(i)==1) ans[i]=1;
		else ans[i]=0;
	}
	while(scanf("%d %d",&a,&b)!=EOF&&(a!=0&&b!=0)){
		int count=0;
		for(int i=a;i<=b;i++){
			if(ans[i]==1){
				printf("%d ",i);
				count++;
			}
		}
		if(count==0){
			printf("no");
		}
		printf("\n");
	}
	return 0;


}
