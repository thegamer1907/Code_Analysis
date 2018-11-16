#include<bits/stdc++.h>
#define IOS {ios :: sync_with_stdio(false); cin.tie(0); }
using namespace std;
typedef long long ll;
typedef long double ld;
#define F first
#define S second
#define pb push_back

ll a[100005];
ll t,n;

int main(){
	IOS;
	cin>>n>>t;
	ll i,j,k,m;
	for(i=1;i<n;i++) cin>>a[i];
	ll pos=1;
	i=1;
	while(1){
//		cout<<pos<<endl;
		pos+=a[i];
		if(pos==t) { 
			cout<<"YES";
			return 0;
		}
		if(pos>t) {
		 
			cout<<"NO";
			return 0;
		}
		i=pos;
	if(i>n)  { 
			cout<<"NO";
			return 0;
		}
	
	}
	
	




}
