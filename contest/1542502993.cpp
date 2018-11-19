#include <bits/stdc++.h>//coded by Nurstan

#define ll long long
#define pb push_back

#define allx x.begin(), x.end()
#define alla a.begin(), a.end()

#define F first
#define S second

// fixed << setprecision
// next_permutation(a, a + n)
// set <int> :: iterator it = x.begin(); it != x.end(); it ++

using namespace std;

const ll INF = int(1e9) + 123;

inline void boost(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
}

int main(){
	boost();
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	char x, y;
	cin >> x >> y;
	int n;
	cin >> n;
	char a[n * 2];
	for(int i = 0; i < n * 2; i ++){
		cin >> a[i];
	}
	for(int i = 0; i < n * 2; i ++){
		if(a[i] == x && i % 2 == 1){
			for(int j = 0; j < n * 2; j ++){
				if(j % 2 == 0 && a[j] == y){
					cout << "YES";
					return 0;
				}
			}
		}
		else if(a[i] == x && i % 2 == 0 && a[i + 1] == y){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	exit(0);
}

