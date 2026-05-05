#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	float ans=0;
	for(int i=0;i<=a;i++){
		ans=ans+i;
	}
	for(int i=0;i<=b;i++){
		ans=ans+i*i;
	}
	for(int i=1;i<=c;i++){
		ans=ans+(float)(1.0/i);	
	}
	printf("%.2f",ans);

}
