#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	while(t--) {
		for(int j = 0; j < s.length() - 1; j++) {
			if(s[j] == 'B' && s[j + 1] == 'G') {
				s[j] = s[j] + s[j + 1];
				s[j + 1] = s[j] - s[j + 1];
				s[j] = s[j] - s[j + 1];
				j++;
			}
		}
	}
	cout << s;
	return 0;
}