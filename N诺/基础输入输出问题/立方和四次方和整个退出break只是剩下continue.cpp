#include<stdio.h>
int main(){
	double  a,b,c,d;
	 while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)!=EOF){
		double tmp=(a*a-b)/2.0;
		if(c!=a*b-tmp*a){
			printf("N\n"); 
			continue;
		}
		if(d!=b*b-tmp*tmp*2){
			printf("N\n");
			continue;
		}
		printf("Y\n");
	}
	return 0;

}
