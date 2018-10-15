#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define all(sdk) sdk.begin(),sdk.end()
#define mll map<ll,ll>
#define endl '\n'
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;++i)
#define repd(i,a,b) for(ll i=a;i>=b;--i)
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mit(m) for(map<ll,ll> :: iterator it=m.begin();it!=m.end();++it)
#define mp make_pair
#define INF 1000000007
#define vvll vector<vector<ll> >
#define vll vector<ll>
#define int long long


string t,s;
const int sz=2e5+5;
int arr[sz];
int occ[26][sz];

bool issubseq(string a,string b){
	
	int size[26]={0};
	rep(i,0,b.length()){
		occ[b[i]-'a'][size[b[i]-'a']++]=i;
	}
	int kj=-1;
	rep(i,0,a.length()){
		int pos=upper_bound(occ[a[i]-'a'],occ[a[i]-'a']+size[a[i]-'a'],kj)-occ[a[i]-'a'];
		if(pos==size[a[i]-'a'])
			return 0;
		kj=occ[a[i]-'a'][pos];
			


	}
	return 1;

}


bool check(int k){
	string g;
	string str="";
	g=t;
	rep(i,0,k){
		g[arr[i]]='0';
	}
	rep(i,0,g.length()){
		if(g[i]!='0')
			str+=g[i];
	}
	// cout<<k<<endl;
	// cout<<str<<endl;
	int val=issubseq(s,str);
	// cout<<val<<endl;
	return val;

}


signed main(){
	fastio;

	
	cin>>t>>s;
	
	

	
	rep(i,0,t.length()){
		cin>>arr[i];
		arr[i]--;
	}

	int beg=0;
	int last=t.length();
	
	while(last-beg>1){
		int mid=(beg+last)/2;
		if(check(mid)){
			
			beg=mid;
		}
		else last=mid;
	}
	// cout<<endl;
	// cout<<check(11)<<endl;
	cout<<beg;

	
	

	



}