#include<bits/stdc++.h>
using namespace std;
int judgeyear(int year){
	if(year%400==0||(year%4==0&&year%100!=0)){
		return 1;
	}
	return 0;
}
void swap(int *a,int*b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	int year1,month1,day1;
	int year2,month2,day2;
	while(scanf("%04d%02d%02d",&year1,&month1,&day1)!=EOF){
		scanf("%04d%02d%02d",&year2,&month2,&day2);
		int mon[12]={31,0,31,30,31,30,31,31,30,31,30,31};
		if(year2>year1){//保证是用1-2
			swap(&year1,&year2);
			swap(&month1,&month2);
			swap(&day1,&day2);
		}
		int count1=day1;
		int count2=day2;
		for(int i=0;i<month1-1;i++){
			if(i==1&&judgeyear(year1)==1){
				count1+=29;
			}
			else if(i==1&&judgeyear(year1)==0){
				count1+=28;
			}
			else{
				count1+=mon[i];
			}
		}
		for(int i=0;i<month2-1;i++){
			if(i==1&&judgeyear(year2)==1){
				count2+=29;
			}
			else if(i==1&&judgeyear(year2)==0){
				count2+=28;
			}
			else{
				count2+=mon[i];
			}
		}
		if(year1==year2){
			int tmp=count1>=count2?count1-count2:count2-count1;
			printf("%d\n",tmp+1);
			break;
		}
		for(int i=year2+1;i<year1;i++){
			if(judgeyear(i)==1){
				count1+=366;
			}
			else{
				count1+=365;
			}
		}
		int tmp;
		if(judgeyear(year2)==1){
			tmp=count1+366-count2+1;
		}
		else{
			tmp=count1+365-count2+1;
		}
		printf("%d\n",tmp);
	}
	return 0;
	
}
