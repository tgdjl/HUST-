#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	while(scanf("%d %d",&n,&a)!=EOF){
		int count=0;
		for(int i=1;i<=n;i++){
			if(i%a==0){
				int j=i;
				while(j%a==0){
					count++;
					j=j/a;
				}
			}
		}
		printf("%d\n",count);
	}
}