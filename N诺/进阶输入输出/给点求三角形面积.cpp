#include<stdio.h>
#include<math.h> 
//以后未知大小整数读取用 long long,小数用double 
int main(){
    long long x1,y1,x2,y2,x3,y3;
    while(scanf("%lld %lld %lld %lld %lld %lld", &x1,&y1,&x2,&y2,&x3,&y3) != EOF){
        double temp = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
        double area = fabs(temp) / 2.0; 
        printf("%.2f\n", area); 
    }
    return 0;
}
