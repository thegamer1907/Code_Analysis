#include <bits/stdc++.h>
using namespace std;
#pragma comment(linker,"/stack:1024000000,1024000000")
#define db(x) cout<<(x)<<endl
#define pc(x) putchar(x)
#define ps(x) puts(x)
#define pf(x) push_front(x)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define ms(x,y) memset(x,y,sizeof x)
typedef long long LL;
const double pi=acos(-1),eps=1e-9;
const LL inf=0x3f3f3f3f,mod=1e9+7,maxn=1123456;
int n,flag,flag1,flag2;
char s[128][5];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>s[0]>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		if(!strcmp(s[0],s[i]))
			flag=1;
		if(s[i][0]==s[0][1])
			flag1=1;
		if(s[i][1]==s[0][0])
			flag2=1;
	}
	db((flag||(flag1&&flag2))?"YES":"NO");
	return 0;
}