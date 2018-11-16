#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<math.h>
#include<utility>
#include<map>
#include<set>
#include<stack>
#include<queue>
using namespace std;
int n, t;
string s;
int main() {
	cin >> n >> t >> s;
	while (t > 0) {
		t--;
		for (int i = 0; i < n; i++) {
			if (i + 1 < n && (s[i] == 'B'&&s[i + 1] == 'G')) {
				swap(s[i], s[i + 1]);
				i++;
			}
		}
	}
	cout << s << endl;
	return 0;
}
