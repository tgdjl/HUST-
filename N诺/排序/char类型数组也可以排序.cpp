#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[30];
	while(scanf("%s",a)!=EOF){
		sort(a,a+strlen(a));
		for(int i=0;i< strlen(a);i++){
			printf("%c",a[i]);
		}
		printf("\n");
	}
}
