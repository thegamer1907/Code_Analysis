/*input
fixprefixsuffix
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pll pair<ll,ll>
#define pb push_back
#define F first
#define S second
#define vll vector<ll>
#define vpll vector<pll>
#define endl '\n'
#define all(x) (x).begin(), (x).end()
ll power(ll a, ll b, ll mod){ ll c = 1; while(b>0){ if(b%2) c*=a, c%=mod; b/=2; a*=a; a%=mod; } return c; }
 
const ll N = (1e6) + 10;
const ll M = 320;
const ll Mod = 1e9 + 7;

vll v;
ll pi[N];

void pre_computation(string p){
    ll i;
    pi[0] = -1; ll k=-1;
    for(i=1;i<p.length();i++){
        while(k>=0 && p[k+1] != p[i])
            k = pi[k];
        if(p[k+1] == p[i])
            k++;
        pi[i]=k;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout<<setprecision(25);
    ll t,i,j,k,n,m,a,b,c; string s;
    cin>>s;
    pre_computation(s);
    n = s.length();

    a = pi[n-1];
    if(a <= -1) {cout<<"Just a legend\n"; goto out;}
    b = pi[a];
    c=-1;
    for(i=0;i<n-1;i++){
    	if(pi[i] == a) {c=i; break;}
    }
    if(c == -1 && b <= -1) {cout<<"Just a legend\n"; goto out;}
    if(c != -1){
    	for(i=c-a;i<=c;i++) cout<<s[i]; cout<<endl; goto out;
    }
	
	for(i=0;i<n-1;i++){
		if(pi[i] == b) {c=i; break;}
	}

	if(c == -1) {cout<<"Just a legend\n"; goto out;}

    for(i=c-b;i<=c;i++) cout<<s[i]; cout<<endl; goto out;

    out:
    return 0;
}