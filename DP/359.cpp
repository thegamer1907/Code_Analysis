#include<cstring>
#include <limits.h>
#include<iostream>
#include<list>
#include <bits/stdc++.h> 
using namespace std;

#define ll long long;
#define pb(i) push_back(i);
#define ff(i,n) for (i = 0; i < n; ++i) 
#define ffkn(i,k,n) for (i = k; i <= n; ++i) 
#define fbkn(i,k,n) for (i = k; i >= n; --i)

int main() {
	/* code */
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin>>t;
	int b[t];
	int i;
	ff(i,t)
		cin >> b[i];
	sort(b,b+t);

	int u; cin >> u;
	int g[u];
	ff(i,u)
		cin >> g[i];

	sort(g,g+u);


	int j=0,k=0;
	int c = 0;
	while(j<t && k < u) {
		if(b[j]+1 == g[k] || b[j]-1 == g[k]||b[j]==g[k]){
			j++;k++;c++;
		} else if (g[k]>b[j]+1)
			j++;
		else
			k++;
	}
	cout << c << endl;
}