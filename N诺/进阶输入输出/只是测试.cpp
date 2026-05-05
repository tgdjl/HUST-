#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int num[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&num[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		int res=0;
		for(int j=0;j<n;j++){
			res+=ans[i][j];
		}
		printf("%d ",res);
	}
	return 0;
}
