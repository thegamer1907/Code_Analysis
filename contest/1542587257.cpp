//satyaki3794
#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)
#define LEFT(n) (2*(n))
#define RIGHT(n) (2*(n)+1)
 
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
 
ll pwr(ll base, ll p, ll mod=MOD){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}


ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}



double h, m, s, t1, t2;


 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>h>>m>>s>>t1>>t2;
    
    if(t1 == 12)	t1 = 0;
    if(t2 == 12)	t2 = 0;
    if(h == 12)	h = 0;
    t1 *= 5;	t2 *= 5;	h *= 5;

    if(t1 > t2)	swap(t1, t2);
    // if(t1 == t2){
    // 	cout<<"YES";
    // 	return 0;
    // }

    h += 0.5;
    m += 0.5;
    s += 0.5;

// cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<endl;

    bool bad = false;
    int cnt = (h > t1 && h < t2) + (m > t1 && m < t2) + (s > t1 && s < t2);
    if(cnt % 3 == 0){
    	cout<<"YES";
    	return 0;
    }

    cout<<"NO";
    return 0;
}






