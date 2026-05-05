#include<bits/stdc++.h>
using namespace std;
void postorder(string pre,string in){
	if(pre.size()==0) return ;
	char root=pre[0];
	int k=in.find(root);//pre首字符为根,意思是root前有k个元素 
	postorder(pre.substr(1,k),in.substr(0,k));
	postorder(pre.substr(k+1),in.substr(k+1));
	cout<<root; 
	
}
void preorder(string in,string post){
	if(in.size()==0) return;
	char root=post[post.size()-1];
	int k=in.find(root);
	cout<<root;
	preorder(in.substr(0,k),post.substr(0,k));
	preorder(in.substr(k+1),post.substr(k,post.size()-k-1));
}
int main(){
	string pre;
	string in;
	string post;
	while(cin>>in>>post){
		preorder(in,post);
		//postorder(pre,in);
		printf("\n");
	} 
} 
#include<bits/stdc++.h>
using namespace std;
string s1;
string s2;
int main(){
	cin>>s1>>s2;
	int flag=0;
	int count=0;
	while(flag==0){
		if(s1.find(s2)==string::npos){
			flag=1;
			break;
		}
		else{
			int k=s1.find(s2);
			count++;
			s1.erase(k,s2.size());
		}
	}
	printf("num=%d;S3=",count);
	cout<<s1;
	return 0;
}