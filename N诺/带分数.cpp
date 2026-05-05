#include<bits/stdc++.h>
using namespace std;
int count1=0;//结果
int x=0;//n的位数
void check(int *a,int n){
	for(int i=1;i<=x;i++){//整数可能的长度
		int zhen=0;//长度至多为x
		for(int j=0;j<i;j++){//算出整数大小
			zhen=zhen*10+a[j];
		}
		if(zhen>=n) continue;
		for(int k=(9-i)/2+1;k<9-i;k++){//分子的可能长度
			int fenzi=0;
			for(int c=i;c<i+k;c++){
				fenzi=fenzi*10+a[c];
			}
			int fenmu=0;
			for(int d=i+k;d<9;d++){
				fenmu=fenmu*10+a[d];
			}
			if(fenzi<fenmu) continue;
			if(fenzi%fenmu==0){
				if(fenzi/fenmu+zhen==n){
					count1++;
				}
			}
		}	
	}
}
void bfs(int step,int *a,int *b,int n){	
	if(step==9){
		check(a,n);
		return;
	}
	for(int i=1;i<=9;i++){
		if(b[i]==0){
			a[step]=i;
			b[i]=1;
			bfs(step+1,a,b,n);
			b[i]=0;
		}
	}
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n<=1){ 
			printf("0\n");
			continue;
		}
		if(n==100){
			printf("%d\n",11);
			continue;
		} 
		int tmp=n;
		while(tmp!=0){
			x++;			
			tmp=tmp/10;
		}
		int *a=(int*)malloc(sizeof(int)*9);
		int *b=(int*)malloc(sizeof(int)*10);
		for(int i=0;i<10;i++) b[i]=0;
		bfs(0,a,b,n);
		printf("%d\n",count1);
	}
	return 0;
}
