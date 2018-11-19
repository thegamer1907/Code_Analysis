#include<iostream>
#include<string>
#include<algorithm>
#define ll long long
#define inf 5e18
#define fl(n) for(int i = 0; i < n;i++)
using namespace std;
int main() {
	string pw;
	int n;
	cin >> pw >> n;
	string pws[100];
	fl(n)
		cin >> pws[i];
	for(int j = 0; j < n; j++){
		string a = pws[j];
		if (a == pw) {
			cout << "YES\n";
			return 0;
		}
		reverse(pw.begin(), pw.end());
		if (a == pw) {
			cout << "YES\n";
			return 0;
		}
		reverse(pw.begin(), pw.end());
		for (int i = j+1; i < n; i++) {
			a = pws[j] + pws[i];
			for (int b = 0; b < 3; b++) {
				if (a[b] == pw[0] && a[b + 1] == pw[1]) {
					cout << "YES\n";
					return 0;
				}
			}
			a = pws[i] + pws[j];
			for (int b = 0; b < 3; b++) {
				if (a[b] == pw[0] && a[b + 1] == pw[1]) {
					cout << "YES\n";
					return 0;
				}
			}
		}
	}
	cout << "NO\n";
	return 0;
}