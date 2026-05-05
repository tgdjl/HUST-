#include<bits/stdc++.h>
using namespace std;
int pos=0;
int check(vector<int> dec,vector<int> rem,int r,int c){
	for(int i=0;i<dec.size();i++){
		if(dec[i]==r&&rem[i]==c){
			pos=i;
			return 1;//循环了 
		}
	}
	return 0;
}
void repent(int x,int y){
	int r,c;//r存余数,c存商 
	r=(10*x)/y;//因为此时x小于y，所以要先乘以十 
	c=(10*x)%y;
	int flag=0;//无限小数
	vector<int> dec,rem;//一个余数一个商 
	while(check(dec,rem,r,c)==0){
		dec.push_back(r);
		rem.push_back(c);
		r=10*c/y;
		c=(10*c)%y;//r=2 c=0		&&r=2 c=20      r=0
		if(r==0&&c==0){//因为若是余数为0就跳转我最后一位存不进去，所以是当余数为零时我再进去一次，等到这一次我上为零了
		//if(r==0){
			flag=1;
			break;
		}
	} 
	for(int i=0;i<pos;i++){
		printf("%d",dec[i]);
	}
	for(int i=pos;i<dec.size();i++){
		if(i==pos&&flag==0){
			printf("(");
		}
		printf("%d",dec[i]);
		if(i==dec.size()-1&&flag==0){
			printf(")");
		}
	}
	printf("\n");
} 
int main(){
	int x,y;
	while(scanf("%d/%d",&x,&y)!=EOF){
		int ans=x/y;
		if(x%y==0){
			printf("%d.0\n",ans);
			continue;
		}
		printf("%d.",ans);
		int left=x%y;
		repent(left,y);
	}
	return 0;
} 
