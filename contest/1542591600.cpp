#pragma GCC optimize("O3")

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mset(m,v) memset(m,v,sizeof(m))
#define pr(a,s) printf("Case #%lld: %lld\n",a,s)
#define mod 1000000007
#define mp make_pair
#define all(a)                a.begin(),a.end()
#define pb push_back
#define scan(a) scanf("%d",&a)
#define scanl(a) scanf("%lld",&a)
#define se second
#define fi first
#define pi 3.14159265358979323
#define pii pair<ll,ll>

const ll inf = 1e9;
const int MAXM = 1e5+10;
const int MAXN = 1e7+1;

vector<string> v;
string s;

bool check(string str)
{
	int f = 0;
	int n = str.size();
	for(int i=0;i<n-1;i++){
		string st = str.substr(i,2);
		if(st==s){
			f = 1;
			break;
		}
	}
	return f==1;
}

int main()
{
	int n;
	cin>>s>>n;
	for(int i=0;i<n;i++){
		string s1;
		cin>>s1;
		v.pb(s1);
		// reverse(all(s1));
		// v.pb(s1);
	}
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v.size();j++){
			string ss = v[i]+v[j];
			if(check(ss)){
				cout<<"YES\n";
				return 0;
			}
		}
	}
	cout<<"NO\n";
	return 0;
}