#include <bits/stdc++.h>

#define pb push_back
#define fi first
#define se second
#define vii vector<int>
#define ll long long

using namespace std;

int main(){
	ll k,n,m;
	cin>>n>>m>>k;
	vector<ll> v(m);
	for(int i = 0; i < m; i++){
		cin>>v[i];
	}
	int cnt = 0;
	ll ind = 0; 
	ll mn = 0;
	ll die = 0;
	int lst_ind=n/k;
	while(cnt<m){
		ll f = ind*k+1;
		ll l = ind*k+k;
		//cout<<"ITER:"<<ind<<endl;
		//cout<<f<<" "<<l<<endl;
		int sc = 0;
		while(cnt<m && v[cnt]-mn<=l && v[cnt]-mn>=f){
			sc++;
			cnt++;
		}
		//cout<<"RES:"<<sc<<" "<<cnt<<endl;
		mn+=sc;
		if(sc>0){
			die++;
		}
		if(cnt==m){
			break;
		}
		ind = (v[cnt]-1-mn)/k;
	}
	cout<<die;
	return 0;
}