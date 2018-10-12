#include "bits/stdc++.h"
using namespace std;
int main() {
	int n, m = -1;
	cin>>n;
	long long ans = 0;
	for(int i = 0; i < n; i++) {
		int tem;
		cin>>tem;
		m = max(m, tem);
		ans += tem;
	}
	long long tt = ans / (n-1);
	if(tt >= m && ans % (n-1) != 0)
	     cout<<++tt<<endl;
	else if(tt >= m)
		cout<<tt<<endl;
	else
		cout<<m<<endl;
}
