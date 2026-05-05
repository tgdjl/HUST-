#include<bits/stdc++.h>
using namespace std;

struct str{
    char a[1005];
    int length; // 存储去除换行符后的真实长度
}p[1005];
// 去除字符串末尾的换行符（关键修复），最后一位为换行符去除换行符改为字符结束符 
void removeNewline(char *s) {
    int len = strlen(s);
    if (len > 0 && s[len-1] == '\n') {
        s[len-1] = '\0'; // 替换换行符为字符串结束符
    }
}

int main(){
    int pos=0;
    // 读取每行输入，直到EOF（Windows按Ctrl+Z，Linux按Ctrl+D）
    while(fgets(p[pos].a, sizeof(p[pos].a), stdin)!=NULL){
        removeNewline(p[pos].a); // 先去除换行符
        p[pos].length = strlen(p[pos].a); // 计算真实长度
        pos++;
        // 防止数组越界（最多读1004行）
        if (pos >= 1005) break;
    }
	int min1=1002;
	int long1=0;
	for(int i=0;i<pos;i++){
		min1=min1<=p[i].length?min1:p[i].length;
		long1=long1>=p[i].length?long1:p[i].length;
	}
	for(int i=0;i<pos;i++){
		if(min1==p[i].length){
			printf("%s\n",p[i].a);
		}
	}
	for(int i=0;i<pos;i++){
		if(long1==p[i].length){
			printf("%s\n",p[i].a);
		}
	}
    return 0;
}
