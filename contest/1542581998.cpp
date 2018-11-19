#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> V;
	set<int> S;
	for(int i = 0; i < n; i++) {
		int temp;
		int val = 0;
		for(int j = 0; j < k; j++) {
			cin >> temp;
			val ^= temp << j;
		}
		if(!S.count(val)) {
			S.insert(val);
			V.push_back(val);
		}
	}
	for(int i = 0; i < V.size(); i++) {
		if(V[i] == 0) {
			cout << "YES" << endl;
			return 0;
		}
		for(int j = i + 1; j < V.size(); j++) {
			if( (V[i] & V[j]) == 0) {
				cout << "YES" << endl;
				return 0;
			}
		}	
	}
	cout << "NO" << endl;
}
