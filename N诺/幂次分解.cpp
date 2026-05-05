#include<bits/stdc++.h>
using namespace std;
vector<int> sushu;
vector<int> count1; 
int main(){
	int n;
	cin>>n;
	if(n==1){
		printf("1\n");
		return 0;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			int count=0;
			while(n%i==0){
				count++;
				n=n/i;
			}
			sushu.push_back(i);
			count1.push_back(count);
		}
	}
	if(n>1){
		sushu.push_back(n);
		count1.push_back(1);
	}
	for(int i=0;i<sushu.size();i++){
		if(i==sushu.size()-1){
			if(count1[i]!=1) printf("%d^%d\n",sushu[i],count1[i]);
			else printf("%d\n",sushu[i]);
		}
		else{
			if(count1[i]!=1) printf("%d^%d * ",sushu[i],count1[i]);
			else printf("%d * ",sushu[i]);
		}
	}
	
	return 0;
} 
