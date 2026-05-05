#include<stdio.h>
#include<string.h>
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	char ans[7][10]={//新建一个含有多个字符串的数组中间用，
		"Tuesday",
		"Friday",
		"Saturday",
		"Sunday",
		"Monday",
		"Tuesday",
		"Wednesday",
	};
	int date[13];
	date[0]=date[1]=date[2]=date[3]=0;
	date[4]=18;
	date[5]=31;
	date[6]=30;
	date[7]=31;
	date[8]=31;
	date[9]=30;
	date[10]=31;
	date[11]=30;
	date[12]=31;
	int res=0;
	if(a==4){
		res=(b-12)%7;
		printf("%s",ans[res]);
	}
	else{
		for(int i=4;i<=a-1;i++){
			res=res+date[i];
		}
		res=res+b;
		res=res%7;
		printf("%s",ans[res]);
	}
	
}
