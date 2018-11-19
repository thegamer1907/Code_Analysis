#include<cstdio>
#include<cstring>
#include<cctype>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
int read(){
    char c;int s=0,t=1;
    while(!isdigit(c=getchar()))if(c=='-')t=-1;
    do{s=s*10+c-'0';}while(isdigit(c=getchar()));
    return s*t;
}
/*------------------------------------------------------------*/
const int inf=0x3f3f3f3f;

int n;
char s[10],ss[20];
int main(){
	scanf("%s",s);
	n=read();
	bool ok1=0,ok2=0;
	for(int i=1;i<=n;i++){
		scanf("%s",ss);
		if(ss[0]==s[0]&&ss[1]==s[1])ok1=ok2=1;
		if(ss[0]==s[1])ok1=1;
		if(ss[1]==s[0])ok2=1;
	}
	if(ok1&&ok2)printf("YES");else printf("NO");
	
	return 0;
}
