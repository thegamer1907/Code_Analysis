#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pil pair<int,ll>
#define pli pair<ll,int>
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
int main(){
FASTIO	
ll n,m,k;
cin>>n>>m>>k;
set<ll> s;
ll a;
for(ll i=0;i<m;i++){
  cin>>a;
  s.insert(a);
}
ll cnt=0;
ll ans=0;
set<ll>:: iterator it,it1,it2;
ll i=1;
while(!s.empty()){
	it=s.lower_bound(i*k+cnt);
    /*if(it!=s.end()){
    	cout<<*it<<" ";
	}*/
    ll p=(i*k+cnt);
	if(it==s.begin()){
		if((*it)==p){
			s.erase(it);
			cnt++;
			ans++;
		}
		else{
			i++;
		}
	}
	else{	
	  for(it1=s.begin();it1!=it;){
		it2=it1;
		//cout<<*it1<<" ";
		it1++;
		s.erase(it2);
		cnt++;
	  }
	  if(it!=s.end()){
	  	 if((*it)==p){
	  	 	//cout<<*it<<" ";
			s.erase(it);
			cnt++;
			//ans++;
		}
	  }
	  ans++;
    }
    //cout<<s.size()<<" ";
}
//cout<<"\n";
cout<<ans;
}