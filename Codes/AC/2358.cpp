#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define int long long // LEMBRAR DE TROCAR CASO PROBLEMA DE MEMORIA
#define pii pair<int,int>
#define ieps (int) 1e6
#define eps (int) 1e9
#define mp make_pair
#define pb push_back

bool isc[10000005];
int nx[10000005];
int n;
int s[10000005];
void sieve(){
	isc[1] = true;
	for(int i = 2 ; i <= (int) 1e7 ; i++){
		if(!isc[i]){
			nx[i] = i;
			for(int j = 2 ; j * i <= (1e7) ; j++){
				isc[j*i] = true;
				nx[j*i] = i;
			}
		}
	}
}

inline void add(int t){
	while(t > 1){
		s[nx[t]]++;
		int w = nx[t];
		while(t % w == 0 && t > 1) t/=w;
	}
	
}



int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0) , cout.tie(0);
	sieve();
	cin>>n;
	vector<int> v(n);
	for(int i = 0 ; i < n;i++){
		cin>>v[i];
		add(v[i]);
	}
	for(int i = 0 ; i  <= (int) 1e7 ; i++) s[i] += s[i-1];
	int m;
	cin>>m;
	while(m--){
		int  l , r;
		cin>>l>>r;
		r = min(r , (int) 1e7);
		if(l > r){
			cout<<0<<endl;
			continue;
		}
		cout<<s[r] - s[l-1]<<endl;
	}
}