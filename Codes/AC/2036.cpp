#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
	using namespace std;

map < long long,vector <int> > m;
long long a[200001];
int main() {
	ios::sync_with_stdio(false);
	int i, n;
	long long int k, res=0, izq, der;
	cin >> n >> k;
	for(i = 0 ; i < n; i++) {
		cin >> a[i];
		m[a[i]].push_back(i);
	}
	for(i = 0; i < n; i++) {
		if(!(a[i]%k) && m.count(a[i]/k) && m.count(a[i]*k)) {
			izq = lower_bound(m[a[i]/k].begin(), m[a[i]/k].end(), i) - m[a[i]/k].begin();
			der = m[a[i]*k].end() - upper_bound(m[a[i]*k].begin(), m[a[i]*k].end(), i);
			res += izq * der;
		}
	}
	cout << res << endl;
}