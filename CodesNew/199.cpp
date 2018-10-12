#include <bits/stdc++.h>
using namespace std;
long long n,t,s,e,sum,mc;
vector<long long>books;
int main() {
	cin >> n >> t; books.assign(n,0);
	for(int i = 0; i < n; i++) cin >> books[i];
	s = 0, e = 0, mc = -1e9, sum = 0;
	while(s <n){
		while(e < n && sum + books[e] <= t)
			sum+= books[e++];
		mc = max(mc,e-s);
		sum -= books[s++];
	}
	cout << mc<< endl;
	return 0;
}