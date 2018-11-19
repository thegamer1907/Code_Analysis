#include <bits/stdc++.h>
using namespace std;

#define rep(i,s,t) for(int i=s,i##end=t;i<=i##end;++i)
#define per(i,s,t) for(int i=t,i##end=s;i>=i##end;--i)
#define repo(i,s,t) for(int i=s,i##end=t;i<i##end;++i)

const int MAXN=1e5+5;
const int MAXK=5;

int A[MAXN];
int S[1<<MAXK];

int main() {
	int n,k;
	cin>>n>>k;
	
	rep (i,1,n) {
		repo (j,0,k) {
			int x;
			scanf("%d",&x);
			A[i]^= x<<j;
		}
	}
	
	repo (s,0,1<<k) {
		rep (i,1,n) {
			if ((A[i]&s)==0) S[s]=1;
		}
	}
	
	bool chk=false;
	rep (i,1,n) {
		int s=A[i];
		if (S[s]) chk=true;
	}


	if (chk) puts("YES");
	else puts("NO");
	return 0;
}