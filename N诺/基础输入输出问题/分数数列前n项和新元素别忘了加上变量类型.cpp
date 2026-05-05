#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	float ans=2.0;
	int i=1;
	float tmp2=2.0;
	float tmp1=1.0;
	while(i!=a){
		float tmp3=tmp2;
		tmp2=tmp1+tmp2;
		tmp1=tmp3;
		ans+=tmp2/tmp1;
		i++;
	}	
	printf("%.2f",ans);

}
