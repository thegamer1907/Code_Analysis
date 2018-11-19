#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int
#define vi vector<int>
#define vii vector< vector<int> >
#define PI 3.1415926535897932384626433832795

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin >> n >> k;
	map<string,bool> was;
	for(int j = 0; j < n; j++) {
		string str;
		bool was1 = false;
		for(int i = 0; i < k; i++) {
			int x;
			cin >> x;
			if(x) {
				str+= '1';
				was1 = true;
			} else {
				str+= '0';
			}
		}
		if(!was1) {
			cout << "YES";
			return 0;
		}
		for(int a = 0; a < 2; a++) {
			for(int b = 0; b < 2; b++) {
				for(int c = 0; c < 2; c++) {
					for(int d = 0; d < 2; d++) {
						if((a && str.at(0) == '1') || (k >= 2 && b && str.at(1) == '1') || (k >= 3 && c && str.at(2) == '1') || (k >= 4 && d && str.at(3) == '1')) {
							continue;
						}
						string st = "";
						if(a) {
							st+= '1';
						} else {
							st+= '0';
						}
						if(k >= 2) {
							if(b) {
								st+= '1';
							} else {
								st+= '0';
							}
							if(k >= 3) {
								if(c) {
									st+= '1';
								} else {
									st+= '0';
								}
								if(k >= 4) {
									if(d) {
										st+= '1';
									} else {
										st+= '0';
									}
								}
							}
						}
						if(was[st]) {
							//cout << str << " " << j << " " << a << " " << b << " " << c;
							cout << "YES";
							return 0;
						}
					}
				}
			}
		}
		was[str] = true;
	}
	cout << "NO";
	return 0;
}
