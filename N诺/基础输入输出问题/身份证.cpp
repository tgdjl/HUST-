#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100];
	while(scanf("%s",a)!=EOF){
		if(strlen(a)!=18){
			printf("ID Wrong\n");
			continue;
		}
		int judge=0;
		int sum=0;
		int b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
		for(int i=0;i<17;i++){
			sum=sum+b[i]*(a[i]-'0');
			if(a[i]>'9'||a[i]<'0'){
				printf("ID Wrong\n");
				judge=1;
				break;
			}
		}
		if(judge==1){
			continue;
		}
		sum=sum%11;
		if(sum==2){
			if(a[17]=='X'){
				printf("ID Correct\n");	
				continue;			
			}
			else{
				printf("ID Wrong\n");
				continue;
			}
		}
		int c[11]={1,0,0,9,8,7,6,5,4,3,2};
		if(c[sum]==a[17]-'0'){
			 printf("ID Correct\n");	
		}
		else{
			printf("ID Wrong\n");
		}
	}

	
}
