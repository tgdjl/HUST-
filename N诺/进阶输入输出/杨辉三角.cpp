#include<stdio.h>
#include<string.h>
int main(){
	int num;
	int ans[20][20];
	for(int i=0;i<20;i++){
		ans[i][0]=1;
		ans[i][i]=1;
	}
	for(int i=1;i<20;i++){
		for(int j=1;j<i;j++){
			ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
		}
	}
	while(scanf("%d",&num)!=EOF&&num!=0){
		for(int i=0;i<num;i++){
			for(int j=0;j<=i;j++){
				printf("%d ",ans[i][j]);
			}
			printf("\n");
		}
		//printf("\n");这个不用打了因为之前每一行都有一个换行符再打一个会有多一个换行符 
	}
		
	
}
