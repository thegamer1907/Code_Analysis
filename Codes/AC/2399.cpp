#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define pb push_back
using namespace std;


const int N = 1e7 + 5;
bool pr[N];
int ct[N];
int sum[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		ct[x]++;
	}

	
	fill(pr + 2, pr + N, true);
	for(int i = 2; i < N; i++){
		if(pr[i]){
			for(int j = i; j < N; j+=i){
				if(j > i) pr[j] = false;
				sum[i] += ct[j];
			}
		}
	}

	
	
	for(int i = 3; i < N; i++) sum[i] += sum[i - 1];

	int m;
	cin >> m;
	while(m--){
		int l, r;
		cin >> l >> r;
		if(l > N - 1) cout << 0 << "\n";
		else{
			r = min(r, N - 1);
			cout << sum[r] - sum[l - 1] << endl;
		}
	}


	return 0;	
}