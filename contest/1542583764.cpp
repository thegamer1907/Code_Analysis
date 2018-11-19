#include <bits/stdc++.h>
using namespace std;

#define rep(i,s,t) for(int i=s,i##end=t;i<=i##end;++i)

const int MAXN=105;

string s[MAXN];

int main() {
	string A;
	cin>>A;
	int n;
	cin>>n;

	bool c1=false,c2=false;
	rep (i,1,n) {
		cin>>s[i];if (s[i]==A) c1=c2=1;
	}
	
	rep (i,1,n) {
		if (s[i][0]==A[1]) c1=true;
		if (s[i][1]==A[0]) c2=true;
	}

	if (c1&&c2) puts("YES");
	else puts("NO");
	return 0;
}