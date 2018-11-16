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
	int a[t];
	int i;
	int count = 0;
	ff(i,t){
		int x = 0;
		cin >> x;
		if(x == 1) {
			count ++;
			a[i] = -1;
		} else {
			a[i] = 1;
		}
	}

	int maxSoFar = 0;
	int maxEnd = INT_MIN;

	ff(i,t){
		maxSoFar += a[i];
		if(maxEnd < maxSoFar){
			maxEnd = maxSoFar;
		}

		if(maxSoFar < 0)
			maxSoFar = 0;
	}

	if(maxEnd == -1){
		cout << t-1 << endl;
	} else {
		cout << maxEnd+count << endl;
	}

}