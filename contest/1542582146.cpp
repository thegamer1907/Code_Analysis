#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;

int N, K, c[MAX], f[MAX], d[MAX];
vector<int> v[MAX];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> N >> K;
	for(int i=1; i<=N; ++i){
		for(int j=1; j<=K; ++j){
			int x; cin >> x;
			if(x){
				++c[j];
				v[i].push_back(j);
				++f[i];
			}
		}
	}

	for(int i=1; i<=K; ++i){
		if(c[i] == N){
			cout << "NO";
			return 0;
		}
	}

	if(K == 1) cout << "YES";

	else if(K == 2) cout << "YES";

	else if(K == 3){
		bool yes = 0;
		for(int i=1; i<=N; ++i){
			if(f[i] == 0 or f[i] == 1){
				cout << "YES";
				return 0;
			}
		}
		cout << "NO";
	}

	else{
		for(int i=1; i<=N; ++i){
			if(f[i] == 0 or f[i] == 1){
				cout << "YES";
				return 0;
			}
			else if(f[i] == 2){
				int val = 0;
				for(auto it:v[i]){
					val = val + (1 << (it - 1));
				}
				++d[val];
			}
		}
		int x;
		x = 1 + 2;
		if(d[x] and d[x ^ 15]){
			cout << "YES";
			return 0;
		}
		x = 1 + 4;
		if(d[x] and d[x ^ 15]){
			cout << "YES";
			return 0;
		}
		x = 1 + 8;
		if(d[x] and d[x ^ 15]){
			cout << "YES";
			return 0;
		}
		cout << "NO";
	}
}
