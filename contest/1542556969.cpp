#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char s[10086];
int main(){
	char st,ed;
	int n;
	scanf("%c%c",&st,&ed);
	scanf("%d",&n);
	bool x=0,y=0,ok=0;
	for(int i=1;i<=n;++i) {
		scanf("%s",s);
		int len=strlen(s);
		if(s[0]==ed) x=1;
		if(s[len-1]==st) y=1;
		if(len==2&&s[0]==st&&s[len-1]==ed||len==2&&s[0]==ed&&s[len-1]==st) ok=1;
	}
	if(x&&y||ok) puts("YES");
	else puts("NO"); 
}