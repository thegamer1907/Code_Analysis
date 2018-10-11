#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
#define pb push_back
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rep(i,start,lim) for(int i=start;i<lim;i++)
#define rep1(i,start,lim) for(int i=start; i<=lim; ++i)
#define repd(i,start,lim) for(int i=start;i>=lim;i--)
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define br cout<<"\n"
#define MOD (1000000007LL)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define eps (1e-6)
#define infll 9e18
#define inf 1e12
#define maxe 2000005

using namespace std;

void pv(vector<ll> v){
	rep(i,0,v.size()){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll test;
	test=1;
	//cin>>test;

	//ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

	while(test--){
		ll n,m;
		cin>>n>>m;
		string s;
		vector<string> s1,s2;
		rep(i,0,n){
			cin>>s;
			s1.push_back(s);
		}
		rep(i,0,m){
			cin>>s;
			s2.push_back(s);
		}
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		std::vector<string> v(10000);                      // 0  0  0  0  0  0  0  0  0  0
  		std::vector<string>::iterator it;
		it=std::set_intersection (s1.begin(), s1.end(), s2.begin(), s2.end(), v.begin());
		v.resize(it-v.begin());   
		if(n>m){
			cout<<"YES"<<endl;
		}
		else if(n<m){
			cout<<"NO"<<endl;
		}
		else{
			if(v.size()%2==1){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}

	}

}