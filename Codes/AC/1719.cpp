#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pi> vpi;
#define inf 1000000000
#define mod 1000000007
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define rep1(i, a, b) for(int i =a; i >=b; i--)
#define f first
#define ss second
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define mt make_tuple


ll n, m, k, l, r, mid, ans=1;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);


cin >> n >> m >> k;

l = 0; r = n*m;

while(l<=r){

    mid = (l+r)/2;

    ll temp = 0;
    ll t = 0;

    rep(i, 1, n){

    temp+= min(m, mid/i);
    t+= min((mid-1)/i, m);

    }

    if(k>t && k<=temp){ans = mid;break;}
    if(temp<k)l = mid+1;
    else r = mid-1;

}

cout << ans << endl;





return 0;}
