#include<bits/stdc++.h>
using namespace std;//未说明只有一组测设集，旋转九十度是先转置在同一行颠倒 
void swap(int *a, int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int a1[n][n];
		int a2[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a1[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a2[i][j]);
		}
	}
	if(n==1){
		if(a1[0][0]!=a2[0][0]){
			printf("-1\n");
			continue;
		}
	}
	int judge=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a1[i][j]!=a2[i][j]){
				judge=1;
				break;
			}
		}
		if(judge==1) break;
	}
	if(judge==0){
		printf("0\n");
		continue;
	}
	judge=0;
	int tmp1[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			tmp1[i][j]=a1[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			swap(&tmp1[i][j],&tmp1[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n/2;j++){
			swap(&tmp1[i][j],&tmp1[i][n-1-j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a2[i][j]!=tmp1[i][j]){
				judge=1;
				break;
			}
			
		}
		if(judge==1) break;
	}
	if(judge==0){
		printf("90\n");
		continue;
	}
	judge=0;
	int tmp2[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			tmp2[i][j]=tmp1[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			swap(&tmp2[i][j],&tmp2[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n/2;j++){
			swap(&tmp2[i][j],&tmp2[i][n-1-j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a2[i][j]!=tmp2[i][j]){
				judge=1;
				break;
			}
		}
		if(judge==1) break;
	}
	if(judge==0){
		printf("180\n");
		continue;
	}
	judge=0;
	int tmp3[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			tmp3[i][j]=tmp2[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			swap(&tmp3[i][j],&tmp3[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n/2;j++){
			swap(&tmp3[i][j],&tmp3[i][n-1-j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a2[i][j]!=tmp3[i][j]){
				judge=1;
				break;
			}
		}
		if(judge==1) break;
	}
	if(judge==0){
		printf("270\n");
	}
	else{
		printf("-1\n");
	}
	}
	
}
