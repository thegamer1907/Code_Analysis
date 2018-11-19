#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define INF 1e18
#define pi pair<ll,ll>
#define pb push_back
#define F first
#define S second
#define sc(x) scanf("%lld",&x)
ll cnt[16];
int main(){
	ll n,k,temp;
	ll a[4];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			cin>>a[j];
		}
		temp=0;
		for(int j=0;j<k;j++){
			temp=temp*2+a[j];
		}
		cnt[temp]++;
	}
	if(cnt[0]){
		cout<<"YES"<<endl;
		return 0;
	}
	for(int i=0;i<pow(2,k);i++){
		for(int j=i+1;j<pow(2,k);j++){
			if(cnt[i] && cnt[j]){
				ll val=i&j;
				if(val==0){
					cout<<"YES"<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"NO"<<endl;
}