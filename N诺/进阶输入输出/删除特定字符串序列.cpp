#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	fgets(s,sizeof(s),stdin);
	char ans[strlen(s)+1];
	int i=0;
	int curans=0;
	while(i!=strlen(s)){
		if(s[i]!='g'&&s[i]!='G'){
			ans[curans]=s[i];
			i++;
			curans++;
		}
		else{
			if((i+2)>=strlen(s)){
				ans[curans]=s[i];
				curans++;
				i++;
			}
			else if((s[i+1]=='Z'||s[i+1]=='z')&&(s[i+2]=='U'||s[i+2]=='u')){
				i+=3;
			}
			else{
				ans[curans]=s[i];
				curans++;
				i++;
			}
			
		}
	}
	ans[curans]='\0';
	printf("%s",ans);
}
