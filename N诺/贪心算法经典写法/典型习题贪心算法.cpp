#include<bits/stdc++.h>
using namespace std;
struct node{//创建了node类型的数据结构，用node类型的a数组存储
	double m,w;//用double后易于计算小数，int时省略了小数点后面的不易于计算 
}a[10005];
bool cmp(node a,node b){//我要的是性价比倒序排序，所以应该是下降就是小于 ，这个函数返回true就是a排在b之前 
	return a.w/a.m<b.w/b.m;//返回的是按照这一维度比a是否该在b之前，这道题若是return true ，说明前一个1ml花的钱少就排在之前 
}
int main(){
	int x,n;
	while(scanf("%d %d",&x,&n)!=EOF&&(x!=-1&&n!=-1)){//为负一时说明结束了 
		for(int i=0;i<n;i++){
			scanf("%lf %lf",&a[i].m,&a[i].w);
		}
		sort(a,a+n,cmp);
		double ans=0;
		for(int i=0;i<n;i++){
			if(x>=a[i].w){
				ans+=a[i].m;
				x=x-a[i].w;
			}
			else{
				ans+=x/(a[i].w/a[i].m);
				break;
			}
		}
		printf("%.3lf\n",ans);
		
	}
}
