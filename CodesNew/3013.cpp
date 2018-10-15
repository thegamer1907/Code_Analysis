#include<bits/stdc++.h>
#define ll long long int
#define mod9 1000000009
#define mod7 1000000007
#define mp make_pair
#define pb push_back
#define fori(i,p,n) for(i=p;i<n;i++)
#define ford(i,p,n) for(i=p;i>=n;i--)
using namespace std;


int main(){
	ll n,i,j;

	cin>>n;

	string s;

	cin>>s;
	//ll arr[n]={0};
	vector<ll> arr;	
	ll cnt=0;
	fori(i,0,s.size()){
		arr.pb(cnt);
		if(s[i]=='1')
			cnt++;
	}
	arr.pb(cnt);
	//cout<<"arr "<<arr[arr.size()-1]<<" "<<cnt<<endl;
	//cout<<"hello"<<endl;
	i=0;
	while(arr[i]!=n && i<s.size())i++;
	if(i==arr.size())
		return cout<<-1<<endl,0;
	i--;
	//cout<<i<<endl;
	ll xx;
	ll ans=0;
	for(;i<s.size();i++){
		//cout<<"h1 "<<i<<endl;
		xx=arr[i];
		if(s[i]=='1')
			xx++;
		ll y=xx-n;
		ll x=lower_bound(arr.begin(),arr.begin()+i+1,y)-arr.begin();
		ll k=lower_bound(arr.begin(),arr.begin()+1+i,y+1)-arr.begin();
		ans+=k-x;
		//cout<<"h2 "<<i<<endl;
	}

	cout<<ans<<endl;
	return 0;
}