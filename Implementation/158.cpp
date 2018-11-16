#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    #ifdef local
		freopen("input.txt", "r", stdin);
	#else
		ios_base::sync_with_stdio(0);
		cin.tie(0);
    #endif
	int n, a, b;
	cin >> n >> a >> b;
	vector<int> s(n);
	for(int i = 0; i < n; i++) {
		s[i] = i + 1;
	}
	int cnt = 1;
	while(true) {
		vector<int> tmp;
		//printf("sz = %d\n", (int)s.size());
		for(int i = 0; i < (int)s.size() - 1; i+=2) {
			if((s[i] == a && s[i + 1] == b) || (s[i] == b && s[i + 1] == a)) {
				//printf("s[%d] = %d s[%d] = %d a = %d b = %d\n", i, s[i], i + 1, s[i + 1], a, b);
				if(cnt == (int)log2(n)) {
					cout << "Final!";
					return 0;
				} else {
					cout << cnt;
					return 0;
				}
			}
			if(s[i + 1] == a || s[i + 1] == b) {
				tmp.push_back(s[i + 1]);
			} else {
				tmp.push_back(s[i]);
			}
		}
		s = tmp;
		cnt++;
	}
	cout << "Final!";
	return 0;
}


