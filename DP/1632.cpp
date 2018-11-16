#include<iostream> 
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
using namespace std;
char c[400000],cc[400000];
int flag,falg;
int main(){
	gets(c);
	for(int i=0;i<=strlen(c+1);++i) cc[i]=c[i];
	for(int i=0;i<strlen(c+1);++i){
		if(c[i]=='B'&&c[i+1]=='A'){
			c[i]='C';
			c[i+1]='C';
			flag=1;
			break;
		}
	}
	if(flag){
		for(int i=0;i<strlen(c+1);++i){
			if(c[i]=='A'&&c[i+1]=='B'){
				falg=1;
				break;
			}
		}
	}
	if(flag&&falg) printf("YES");
	else{
		flag=0;falg=0;
		for(int i=0;i<strlen(cc+1);++i){
			if(cc[i]=='A'&&cc[i+1]=='B'){
				cc[i]='C';
				cc[i+1]='C';
				flag=1;
				break;
			}
		}
		for(int i=0;i<strlen(cc+1);++i){
			if(cc[i]=='B'&&cc[i+1]=='A'){
				falg=1;
				break;
			}
		}
		if(flag&&falg) printf("YES");
		else printf("NO");
	}
}