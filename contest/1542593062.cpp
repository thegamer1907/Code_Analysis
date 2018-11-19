#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
#define N 200
#define inf
#define mod
#define rg register
using namespace std;
typedef long long ll;
typedef double db;
int n;
char s[N],t[N][N];
int main(){
	//	freopen ("a.in","r",stdin);
	//	freopen ("a.out","w",stdout);
	scanf ("%s",s+1);
	scanf ("%d",&n);
	for (int i=1;i<=n;++i){
		scanf ("%s",t[i]+1);
		if (t[i][1]==s[1]&&t[i][2]==s[2]) { printf ("YES\n");return 0; }
	}
	int a=0,b=0;
	for (int i=1;i<=n;++i){
		if (t[i][1]==s[2]) a=1;
		if (t[i][2]==s[1]) b=1;
	}
	if (a+b==2) printf ("YES\n");
	else printf ("NO\n");
	return 0;
}
