#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<ll> vl;
typedef queue<int> qi;
typedef queue<ll> ql;
typedef pair<ll,ll> pll;
typedef pair<int,ll> pil;
typedef pair<ll,int> pli;
#define pq priority_queue
#define rep(i,n) for (int i=0;i<n;++i)
#define mp make_pair
#define pb push_back
#define pf push_front
#define F first
#define S second
#define INF 2000000009
int n;
string a;
bool a1,b1;
int main()
{
    ios::sync_with_stdio(false);
    cin>>a;
    cin>>n;
    rep(i,n){
    	string s;
    	cin>>s;
    	if (s==a){
    		cout<<"YES";
    		return 0;
    	}
    	if (s[0]==a[1]) b1=1;
    	if (s[1]==a[0]) a1=1;
    }
    if (a1&&b1) cout<<"YES";
    else cout<<"NO";
}