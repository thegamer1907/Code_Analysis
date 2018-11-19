//Author: Lixiang
#include<stdio.h>
struct A{
	char s[5],s1[5];
	int N;
	void init(){
		scanf("%s",s);
		scanf("%d",&N);
	}
	void work(){
		bool flag=0,flag1=0,flag2=0;
		for(int i=1;i<=N;i++){
			scanf("%s",s1);
			if(s[0]==s1[0]&&s[1]==s1[1])flag=1;
			if(s[1]==s1[0])flag2=1;
			if(s[0]==s1[1])flag1=1;
		}
		puts((flag||(flag1&&flag2))?"YES":"NO");
	}
}sol;
int main(){
	sol.init();
	sol.work();
	return 0;
}

