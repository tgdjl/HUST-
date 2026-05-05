#include<bits/stdc++.h>
using namespace std;
long long ans(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    if(n%2==1) return ans(n-1);//n为奇数，他比前一个正好大1， 
    return (ans(n-1)+ans(n/2))%1000000000;//拆法里含有一就是就是一定要有个一，剩下的随便就是前一个的数据，拆法里没有一就相当于全是偶数，正好就是就是小一倍的那个*2 ，所以是这么写的 
}
int main(){
    int n;
    scanf("%d",&n);
    long long res=ans(n)%1000000000;
    printf("%lld\n",res);
    return 0;
}
