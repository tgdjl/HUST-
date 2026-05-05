#include<bits/stdc++.h>
using namespace std;
struct node{
	int number;
	char name[13];
	int age;
}a[32];
bool cmp(node a,node b){
	return a.age<b.age||(a.age==b.age&&a.number<b.number)||(a.age==b.age&&a.number==b.number&&a.name<b.name);
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d %s %d",&a[i].number,&a[i].name,&a[i].age);
		}
		sort(a,a+n,cmp);
		if(n>=3){
			for(int i=0;i<3;i++){
				printf("%d %s %d\n",a[i].number,a[i].name,a[i].age);
			}
		}
		else{
			for(int i=0;i<n;i++){
				printf("%d %s %d\n",a[i].number,a[i].name,a[i].age);
			}
		}
	}
	return 0;
}
