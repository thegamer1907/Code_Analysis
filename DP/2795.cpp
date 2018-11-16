//Kaori Miyazono, did I reach you ?
//"I can't die because... I'm the one who will protect you." -Asuna Yuuki
 
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	vector<int> d;
	int k = n;
	while(k > 0) {
		d.push_back(k % 10);
		k /= 10;
	}
	int ans = 0;
	for(int i = 0; i < d.size(); i++) ans = max(ans, d[i]);
	cout << ans << endl;
	for(int i = 0; i < ans; i++) {
		int now = 0;
		int pot = 1;
		for(int j = 0; j < d.size(); j++) {
			if (d[j] > 0) {
				now += pot;
				d[j]--;
			}
			pot *= 10;
		}
		cout << now << ' ';
	}
   	return 0;
}