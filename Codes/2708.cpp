/*input
abcdabc
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pll pair<ll,ll>
#define pb push_back
#define F first
#define S second
#define I insert	
#define vll vector<ll>	
#define vpll vector<pll>
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
ll power(ll a, ll b, ll mod){ ll c = 1; while(b>0){ if(b%2) c*=a, c%=mod; b/=2; a*=a; a%=mod; } return c; }
	 
const ll N = (1e6) + 10;
const ll M = 320;
const ll Mod = 1e9 + 7;
ll z[N];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout<<setprecision(25);
    
    string s;
    ll n,m,i,j,k,a,b,l,r; 
    cin>>s;
    n = s.length();

    l=r=0;
    for(i=0;i<n;i++){
    	if(i > r){
    		l = r = i;
    		while(r < n && s[r-i]==s[r]) r++;
    		z[i]=r-l; r--;
    	}
    	else{
    		k = i-l;
    		if(z[k] < r-i+1)	z[i] = z[k];
    		else{
    			l=i;
    			while(r < n && s[r-i]==s[r]) r++;
    			z[i]=r-l;r--;
    		}
    	}
    }
    a = 0; b = 0;
    for(i=1;i<n;i++){
    	if(z[i] == n-i && a >= n-i) {b = n-i; break;}
    	a = max(a,z[i]);
    }
    if(b == 0){
    	cout<<"Just a legend\n"; return	0;
    }
    for(i=n-b;i<n;i++) cout<<s[i]; cout<<endl;
	return 0;
}