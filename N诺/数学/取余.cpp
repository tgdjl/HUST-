#include<bits/stdc++.h>
using namespace std;
int main(){//求n的五次方对3的模 
	int n;
	while(scanf("%d",&n)!=EOF){
		n=n%3;
		n=n*n*n*n*n;
		n=n%3;
		printf("%d\n",n);
	}
	return 0;
}
int main(){//大数取余
	char a[1005];
	int n;
	while(scanf("%s%d",a,&n)!=EOF){
		int ans=0;
		for(int i=0;i<strlen(a);i++){
			ans=((ans*10)%n+(a[i]-'0')%n)%n;
		}
	} 
}
模运算满足分配律，这是整个逻辑的基础：
(a+b)%n=[(a%n)+(b%n)]%n
(a*b)%n=[(a%n)×(b%n)]%n
对于任意大数（比如字符串 "d1d2d3dn"，对应数字 
N%n拆解成逐位计算：
第一步：计算 d1 % n → 记为 ans1
第二步：计算 (ans1×10 + d2) % n → 记为 ans2（等价于 
(d1×10+d2)%n
）
第三步：计算 (ans2×10 + d3) % n → 记为 ans3（等价于 
(d1×100+d2×10+d3)%n
）
...
第 k 步：ans = (ans×10 + dk) % n → 最终得到整个数的模

