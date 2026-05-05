#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<2*n-1;j++){
			if(j>=n-i-1&&j<=n+i-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(int i=0;i<2*n-1;i++){
		printf("*");
	}
	printf("\n");
	for(int i=0;i<n-1;i++){
		for(int j=0;j<2*n-1;j++){
			if(j>=i
			+1&&j<=2*n-3-i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}	
	printf("\n");
}
