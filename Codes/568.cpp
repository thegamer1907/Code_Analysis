#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii; 

bool per(int n) {
	int sum = 0;
	while(n) sum += n % 10, n /= 10;
	return sum == 10;
}
int main(int argc, char const *argv[]) {
#ifdef LOCAL_TESTING
	freopen("in", "r", stdin);
#endif
	vector<int> v; 
	for(int i = 1; v.size() < 10000; i++) {
		if(per(i)) v.push_back(i);
	}

	int k; cin >> k;
	cout << v[k - 1] << endl;
}