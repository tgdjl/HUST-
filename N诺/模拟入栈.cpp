#include<bits/stdc++.h>
using namespace std;//主要是判断如何是非法的
char ans[31];
void check(){
	stack<char> s;
	int k=0;
	string tmp="abcdefghijklmnopqrstuvwxyz";
	for(int i=0;i<tmp.size();i++){
		s.push(tmp[i]);
		while(!s.empty()&&s.top()==ans[k]){
			s.pop();
			k++;
		}
	}
	if(s.empty()){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
	
}
int main(){
	while(scanf("%s",ans)!=EOF){
		check();
	}
	return 0;
	
}
