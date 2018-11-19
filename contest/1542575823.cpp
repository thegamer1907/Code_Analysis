#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
inline void readInt(int &x) {
	x=0;int f=1;char ch=getchar();
	while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}
	while(isdigit(ch))x=x*10+ch-'0',ch=getchar();
	x*=f;
}
inline void readLong(ll &x) {
	x=0;int f=1;char ch=getchar();
	while(!isdigit(ch)){if(ch=='-')f=-1;ch=getchar();}
	while(isdigit(ch))x=x*10+ch-'0',ch=getchar();
	x*=f;
}
/*================Header Template==============*/
char s[3];
int n;
char st[105][3];
bool ok=0;
int main() {
	scanf("%s",s);
	readInt(n);
	for(int i=1;i<=n;i++) {
		scanf("%s",st[i]);
		if(strcmp(st[i],s)==0)
			ok=1;
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if(st[i][0]==s[1]&&st[j][1]==s[0])
				ok=1;
		}
	}
	if(ok)
		puts("YES");
	else
		puts("NO");
	return 0;
}