#include<bits/stdc++.h>
using namespace std;
#define ll int
#define fr first
#define sc second
#define MAX ((ll)(1e18+100))
#define MOD ((ll)(1e9+7))
#define HS1 ((ll)(137))
#define HS2 ((ll)(1e9+9))
#define ARRS ((ll)(1e5+900))
#define pb push_back

ll n;
string s,t;

ll k=0;

ll f[5];
ll a[ARRS][5];
ll iz[1000];


int main(){
	cin>>n>>k;
	ll fg=0;
	for(int i=0; i<n; i++){
		ll c=0;
		ll t=0;
		for(int j=0; j<k; j++){
			cin>>a[i][j];
			f[j]|=(a[i][j]^1);
			c+=a[i][j];
			t=t*2+a[i][j];
		}
		iz[t]=1;
		if(c<=1)fg=1;
	}

	ll e=0;
	for(int i=0; i<k; i++){
		if(f[i]==0)e=1;
	}
	if(e){
		cout<<"NO";
		return 0;
	}
	if(fg){
		cout<<"YES";
		return 0;
	}
	if(k!=4){
		cout<<"NO";
		return 0;
	}
	for(int k=0; k<(1<<4); k++){
		//cout<<k<<" "<<(k^15)<<endl;
		if(iz[k]&&iz[k^15])fg=1;
	}
	if(fg){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}
