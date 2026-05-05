#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q,x;
	map<int,int> M;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		M[x]++;
	}
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%d",&x);
		if(M[x]==0){
			printf("no\n");
			M[x]++;
		}
		else{
			printf("find\n");
		}

		
	}
}
