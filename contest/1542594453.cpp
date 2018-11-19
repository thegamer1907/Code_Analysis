#include<cstdio>
#include<cstring>
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define LL long long
#define FOR(i,a,b) for (int i=a;i<=b;++i)
#define FORD(i,a,b) for (int i=a;i>=b;--i)
using namespace std;
typedef pair<int,int> pa;
typedef long double ld;
void getint(int &v){
    char ch,fu=0;
    for(ch='*'; (ch<'0'||ch>'9')&&ch!='-'; ch=getchar());
    if(ch=='-') fu=1, ch=getchar();
    for(v=0; ch>='0'&&ch<='9'; ch=getchar()) v=v*10+ch-'0';
    if(fu) v=-v;
}
char a[666][666],s[666];
int n;
int main(){
	scanf("%s",s);
	scanf("%d",&n);
	FOR(i,1,n){
		scanf("%s",a[i]);
		if (a[i][0]==s[0] && a[i][1]==s[1]) return puts("YES"),0;
	}
	FOR(i,1,n)
		FOR(j,1,n)
			if (a[i][1]==s[0] && a[j][0]==s[1]) return puts("YES"),0;
	return puts("NO"),0;
}