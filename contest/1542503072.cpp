#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>
#include <climits>
#include <cstdlib>
 
#define Set(a, s) memset(a, s, sizeof (a))
#define Rd(r) freopen(r, "r", stdin)
#define Wt(w) freopen(w, "w", stdout)

typedef long long LL;
 
using namespace std;
 
int n, m;
string s[205];

int ans[205];

int calc (string si) {
	for (int i=1; i<10; i++) {
		for (int j=0; j<(1<<i); j++) {
			string t="";
			for (int k=i-1; k>=0; k--) {
				if (j&(1<<k))
					t+='1';
				else
					t+='0';
			}
			if (si.find(t)==string::npos)
				return i-1;
		}
	}
	return 9;
}

int main (int argc, char ** argv) {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>s[i];
		ans[i]=calc(s[i]);
	}
	cin>>m;
	int a, b;
	for (int i=0; i<m; i++) {
		cin>>a>>b;
		a--; b--;
		s[n+i]=s[a]+s[b];
		if (s[n+i].size()>1000)
			s[n+i]=s[n+i].substr(0, 500)+s[n+i].substr(s[n+i].size()-500, 500);
		ans[n+i]=max(ans[a], max(ans[b], calc(s[n+i])));
		cout<<ans[n+i]<<'\n';
	}
	return 0;
}


