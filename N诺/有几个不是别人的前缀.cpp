#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string a[105];
int main(){
	int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		if(n<1){
			cout<<n<<endl;
			break;
		}
			int pos;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int count=0;
		sort(a,a+n);
		for(int i=0;i<n-1;i++){//按照字典顺序排序完后只要不在下一个里那他就不是别人的前缀 
			if(a[i+1].find(a[i])!=0){//是前缀的话就返回的是0，否则无论烦不烦会 
				count++;
			}
		}
		count++;
		printf("%d\n",count);
	}
	return 0;
}
