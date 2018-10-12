#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int q=2e9;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i], q=min(q,a[i]/n);
	for (int i=0; i<n; i++) a[i]-=q*n;
	for (int i=0; i<10*n; i++) {
		if(a[i%n]-i<=0) {
			cout << i%n+1 << endl; break;
		}
	}
	return 0;
}
