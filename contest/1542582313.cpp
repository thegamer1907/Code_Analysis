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
int n,k,s[555],x,t,cnt[555];
int main(){
	scanf("%d%d",&n,&k);
	FOR(i,1,n){
		int t=0;
		FOR(j,0,k-1){
			getint(x);
			t+=(1<<j)*x;
		}
		s[t]++;
	}
	FOR(i,0,(1<<k)-1)
		FOR(j,0,(1<<k)-1)
			if (s[i] && s[j] && (i&j)==0) return puts("YES"),0;
	return puts("NO"),0;
}