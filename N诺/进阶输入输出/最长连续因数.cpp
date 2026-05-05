#include<stdio.h>
int main(){//一不算因数 
	int a;
	scanf("%d",&a);
	int ans[1000];
	int cur=-1;
	for(int i=2;i<=a;i++){
		if(a%i==0){
			cur++;
			ans[cur]=i;
		}
	}//现在有cur个因数即转化为找这个数组里的
	int tmp1=0;
	int count=0;
	int tmpleft;
	int tmpright;
	while(tmp1!=cur){
		int tmp=tmp1;
		while(tmp1!=cur&&ans[tmp1]+1==ans[tmp1+1]){
		 	tmp1++;
		}
		int tmpcount=tmp1-tmp+1;
		if(tmpcount>count){
			count=tmpcount;
			tmpleft=tmp;
			tmpright=tmp1;
		}
		tmp1++;
	}
	for(int i=tmpleft;i<=tmpright;i++){
		printf("%d ",ans[i]);
	}
	return 0;
}
