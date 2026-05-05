#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
int sushu[340003];
int main(){
	for(int i=0;i<340003;i++){
		sushu[i]=0;
	}
	sushu[0]=sushu[1]=1;
	for(int i=2;i<340003;i++){
		if(sushu[i]==0){
			for(int j=i;j<340003;j+=i){
				int tmp=j;
				while(tmp%i==0){
					sushu[j]++;
					tmp=tmp/i;
				}
			}
		}
	}
	for(int i=256;i<340003;i++){
		if(sushu[i]>=8) ans.push_back(i);
	}
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		cout<<ans[x-1]<<endl;
	}
} 
