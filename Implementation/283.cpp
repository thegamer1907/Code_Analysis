#include <bits/stdc++.h>
#define F(i,n) for (int i=0;i<(int)n;i++)
using namespace std;
using ll=long long;

int main() {
	ios_base::sync_with_stdio(0);
	int n,a,b; cin>>n>>a>>b; a--; b--;
	int k=0;
	for (; a!=b; k++) {a/=2; b/=2;}
	if (1<<k==n) cout<<"Final!"; else cout<<k;
	return 0;
}
