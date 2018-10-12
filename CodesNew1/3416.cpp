#include <bits/stdc++.h>
#define LL long long
#define pb push_back
using namespace std;

int main() {
	int n, m, mx = 0, x;
	multiset<int> st;
	cin>>n>>m;
	for(int i = 0; i < n; i++) {
		cin>>x;
		st.insert(x);
		mx = max(mx, x);
	}
	mx += m;
	while(m--) {
		x = *st.begin();
		st.erase(st.begin());
		x++;
		st.insert(x);
	}
	auto it = st.end();
	it--;
	cout<<(*it)<<" "<<mx<<endl;
	return 0;
}