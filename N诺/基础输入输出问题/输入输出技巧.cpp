#include<bits/stdc++.h>
using namespace std; 
int main(){
	//比较好的扫描日期的方法 
	//int a,b,c;
	//scanf("%d-%d-%d",&a,&b,&c);
	//printf("%d %d %d",a,b,c);
	//0~9 A~Z a~z ASCII码顺序 
	//每个数的大小及其数目，如果多个数字的个数相同，输出最大的那个 
	int count1[105];
	int count2[105];
	for(int i=0;i<105;i++){
		count1[i]=0;
		count2[i]=0;
	} 
	int n;
	scanf("%d",&n);
	int x;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		count1[x]++;
	}
	for(int i=0;i<105;i++){
		count2[count1[i]]=i;//对应个数上填数字个数；越后面越大不必比较大小 
	}
	for(int i=0;i<105;i++){//数字都是大于零的，大于零就表示有这么个数字全这个值 
		if(count2[i]>0) printf("%d %d\n",count2[i],i);
	}
	return 0;
} 
