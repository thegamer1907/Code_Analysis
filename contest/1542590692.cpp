#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring> 
#define ll long long
using namespace std;
inline int read(){
	int x=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=(x<<1)+(x<<3)+c-'0';c=getchar();}
	return x*f;
}
char s[10];
char c[10];
int n;
int ok1,ok2;
int main(){
	//freopen("a.in","r",stdin);
	//freopen("a.out","w",stdout);
	scanf("%s",s+1);
	n=read();
	for(int i=1;i<=n;i++){
		scanf("%s",c+1);
		if(c[1]==s[1]&&c[2]==s[2]){puts("YES");return 0;}
		if(c[2]==s[1])ok1=1;
		if(c[1]==s[2])ok2=1;
	}
	if(ok1&&ok2)puts("YES");
	else puts("NO");
	return 0;
}