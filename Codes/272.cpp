#include <bits/stdc++.h>

//In GOD We Trust
//A_Z :(

using namespace std;
typedef long long ll;
const int Maxn = 1e5 + 5;
int par[Maxn];
int k;

int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int q;
		cin >> q;
		par[i] = par[i - 1] + q;
	}
	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> k;
		int l = 0;
		int r = n + 1;
		while(r - l > 1){
			int mid = (r + l) / 2;
			if(par[mid] < k){
				l = mid;
			}
			else{
				r = mid;
			}
		}
		cout << r << endl;
	}
}
