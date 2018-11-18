//K.Chaitanya
#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
//std::ios::sync_with_stdio(false);
int main(){
    std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string s,st;
	cin>>s;
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++){
		cin>>st;
		v.pb(st);
	}
	for(int i=0;i<n;i++){
		string k;
		k=v[i];
	    k+=v[i];
	   if(k.find(s)!=std::string::npos){
			cout<<"YES"<<endl;
			return 0;
	   }
	   for(int j=i+1;j<n;j++){
		      k=v[i];
		      k+=v[j];
		      if(k.find(s)!=std::string::npos){
				  cout<<"YES"<<endl;
				  return 0;
			  }
			  k=v[j];
			  k+=v[i];
			   if(k.find(s)!=std::string::npos){
				  cout<<"YES"<<endl;
				  return 0;
			  }
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
 









