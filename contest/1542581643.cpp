#include<cstdio>
#include<cstring>
#include<algorithm>
#define ll int
#define N 105
#define rep(i,j,k) for (ll i=j;i<=k;++i)
#define per(i,j,k) for (ll i=j;i>=k;--i)
using namespace std;
char s[N],ch[N]; ll n,a1,a2;
int main(){
	scanf("%s",s+1); scanf("%d",&n);
	rep(i,1,n){
		scanf("%s",ch+1);
		if(s[1]==ch[1]&&s[2]==ch[2]) return puts("YES")&0;
		if (s[1]==ch[2]) a1=1;
		if (s[2]==ch[1]) a2=1;
	}
	if (a1&&a2) puts("YES");
	else puts("NO");
}
