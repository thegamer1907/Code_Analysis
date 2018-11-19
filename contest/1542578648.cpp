#include<bits/stdc++.h>

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PB push_back

using namespace std;

bool check(int arr[16], int pos, int m, vector<int> possib, int count){
	
	// cout << count << " " << pos << " -- ";
	// for (auto el : possib) cout << " " << el;
	// cout << endl;
	if (pos >= (1 << m)) return false;

	int maksi = 0;
	for (auto el : possib) maksi = max(maksi, el);
	if (count > 0 && (maksi <= count / 2)) return true;

	bool result = false;
	for (int i = pos; i < (1 << m) && !result; i++){
		// cout << "pos " << i << " " << arr[i] << endl;
		if (arr[i] > 0){
			vector<int> temp(possib);
			for (int j = 0; j < m; j++){
				// cout << ((i & (1 << j)) > 0) << " ";
				temp[j] += (i & (1 << j)) > 0;	
			}
			// cout << endl;
			result = result || check(arr, i + 1, m, temp, count+1);
		}
	}
	return result;
}

int main(){
	fastio;

	int n, m;
	cin >> n >> m;
	int occur[16];
	memset(occur, 0, sizeof occur);

	int a;
	while (n--){
		int temp = 0;
		for (int i = 0; i < m; i++){
			cin >> a;
			temp += (a << i);
		}
		occur[temp]++;
	}

	vector<int> possib;
	for (int i = 0; i < m; i++) possib.PB(0);

	if (occur[0] > 0 || check(occur,0, m, possib, 0)) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

	return 0;
}