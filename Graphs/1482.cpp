#include <bits/stdc++.h>
using namespace std;
int n, t, a[50000];
int main() {
	cin>>n>>t;
	for (int i=1; i<=n; i++)
		cin>>a[i];
	for (int i=1; i<=n;){
		if (i + a[i]>t)
			return cout<<"NO\n", 0;
		else if (i+a[i] == t)
			return cout<<"YES\n", 0;
		else
			i += a[i];
	}
	return 0;
}