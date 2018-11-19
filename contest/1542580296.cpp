#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<list>
using namespace std;
typedef long long LL;
const int N=210,M=3e4;
int gi() {
	int w=0;bool q=1;char c=getchar();
	while ((c<'0'||c>'9') && c!='-') c=getchar();
	if (c=='-') q=0,c=getchar();
	while (c>='0'&&c <= '9') w=w*10+c-'0',c=getchar();
	return q? w:-w;
}
const int lim=25;
struct string{
	list<bool>L,R;
	set<int>G[lim+1];
	inline void in() {
		static char str[N];
		scanf("%s",str+1);
		int n=strlen(str+1);
		for (int i=1;i<=n;i++) {
			if (L.size()==lim) break;
			L.push_back(str[i]-'0');
		}
		for (int i=n;i;i--) {
			if (R.size()==lim) break;
			R.push_back(str[i]-'0');
		}
		for (int i=1,j,k,s;i<=lim;i++)
			for (j=1;j<=n-i+1;j++) {
				s=0;
				for (k=0;k<i;k++)
					s=s<<1|(str[j+k]-'0');
				G[i].insert(s);
			}
	}
	inline void merge(string &a,string &b) {
		for (bool t:a.L) {
			if (L.size()==lim) break;
			L.push_back(t);
		}
		for (bool t:b.L) {
			if (L.size()==lim) break;
			L.push_back(t);
		}
		for (bool t:b.R) {
			if (R.size()==lim) break;
			R.push_back(t);
		}
		for (bool t:a.R) {
			if (R.size()==lim) break;
			R.push_back(t);
		}
		static bool p[M];
		int n=0,m;
		for (bool t:a.R) p[++n]=t;
		reverse(p+1,p+1+n);
		m=n;
		for (bool t:b.L) p[++m]=t;
		for (int i=1;i<=lim;i++) {
			for (int t:a.G[i]) G[i].insert(t);
			for (int t:b.G[i]) G[i].insert(t);
			for (int j=max(n-i+2,1);j<=n&&j+i-1<=m;j++) {
				int s=0;
				for (int k=0;k<i;k++) s=s<<1|p[j+k];
				G[i].insert(s);
			}
		}
	}
	inline int solve() {
		int ans=0;
		for (int i=1;i<=lim;i++)
			if ((G[i].size())==(1<<i)) ans=i;
			else return ans;
		return ans;
	}
}str[N];
int main()
{
#ifndef ONLINE_JUDGE
	freopen("D.in","r",stdin);
	freopen("D.out","w",stdout);
#endif
	int n=gi(),m,i,a,b;
	for (i=1;i<=n;i++) str[i].in();
	m=gi();
	for (i=n+1;i<=n+m;i++) {
		a=gi(),b=gi();
		str[i].merge(str[a],str[b]);
		printf("%d\n",str[i].solve());
	}
	return 0;
}
