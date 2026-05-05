#include<bits/stdc++.h>
using namespace std;
char ans[303][303];
int m,n; 
int count1;
void dfs(int i,int j){
	if(i<0||i>=m||j<0||j>=n||ans[i][j]=='0') return ;
	ans[i][j]='0';
	dfs(i,j+1);
	dfs(i,j-1);
	dfs(i-1,j);
	dfs(i+1,j);
}
int main(){
	scanf("%d %d",&m,&n);
	getchar();//去换行符
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%c",&ans[i][j]);
		}
		getchar();
	} 
	count1=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(ans[i][j]=='1'){//将周遭的陆地全变为水防止影响后续判断 
				dfs(i,j);
				count1++;	
			}
			
		}
	}
	printf("%d\n",count1);
} 
