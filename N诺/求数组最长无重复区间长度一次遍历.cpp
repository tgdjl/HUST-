#include<bits/stdc++.h>
using namespace std;
int att[100003];//上一次这个值出现时的下标记 
int main(){
	for(int i=0;i<100003;i++) att[i]=-1;
	int n;
	cin>>n;
	int ans[n];
	for(int i=0;i<n;i++){
		cin>>ans[i];
	}
	int left=0;
	int length=0;
	for(int right=0;right<n;right++){
		if(att[ans[right]]!=-1){
			left=max(left,att[ans[right]]+1); 
		}
		att[ans[right]]=right;
		length=max(length,right-left+1); 
	}
	cout<<length;
}
