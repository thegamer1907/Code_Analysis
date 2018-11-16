//Kaori Miyazono, did I reach you ?
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

const int N = 10001;
int par[N];

int find(int v){
	if (v == par[v]) return v;
	return par[v] = find(par[v]);
}

void uni(int a, int b){
	a = find(a);
	b = find(b);                    
	par[a] = b;
}
                 
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	for(int i = 0; i < N; i++) par[i] = i;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		uni(a, i + 1);    
	}	
	int ans = 0;
	for(int i = 1; i <= n; i++){
		//cout << i << ' ' << par[i] << endl;
		if ( par[i] == i ) ans++;
	}
	cout << ans;
	return 0;	
}         




