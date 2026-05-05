#include<bits/stdc++.h>
using namespace std;
int length(int a){
	int l=0;
	while(a!=0){
		a=a/10;
		l++;
	}
	return l;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int ans[n][n];
		if(n==1){
			printf("1\n");
			continue;
		}
		int count=0;
		int left=0;
		int right=n-1;
		int top=0;
		int bottom=n-1;
		int judge=0;
		while(count<=n*n){
			 for(int i=top;i<=bottom;i++){
			 	ans[i][left]=count+1;
				count++;
				if(count>=n*n){
					judge=1;
					break;
				}
			 }
			if(judge==1) break;
			left++;
			for(int i=left;i<=right;i++){
			 	ans[bottom][i]=count+1;
				count++;
				if(count>=n*n){
					judge=1;
					break;
				}
			 }
			if(judge==1) break;
			bottom--;
			
			for(int i=bottom;i>=top;i--){
			 	ans[i][right]=count+1;
				count++;
				if(count>=n*n){
					judge=1;
					break;
				}
			 }
			if(judge==1) break;
			right--;
			for(int i=right;i>=left;i--){
			 	ans[top][i]=count+1;
				count++;
				if(count>=n*n){
					judge=1;
					break;
				}
			 }
			if(judge==1) break;
			top++;
			
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%-4d",ans[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
