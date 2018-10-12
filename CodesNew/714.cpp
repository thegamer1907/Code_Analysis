#include <iostream>
#include <set>
using namespace std;

int main(){
	int n, m, t = 0, t1 = 0, q = 0, w;
	cin >> n >> m;
	set <string> k;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		k.insert(s);
	}
	t = k.size();
	for(int i = 0; i < m; i++){
		string s;
		cin >> s;
		k.insert(s);
	}
	t1 = k.size() - t;
	q = m - t1;
	t -= q;
	t += (q + 1) / 2;
	t1 += q / 2;
	if(t > t1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}