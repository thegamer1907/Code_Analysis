#include<bits/stdc++.h>
#define debug(x) cerr<<#x<<": "<<x<<endl;
#define y second
#define x first
using namespace std;


typedef long long ll;


const ll MAX = 1e18+1000;

typedef pair<float,float> pii;
typedef  vector<int> vi;
double angle(pii a, pii b){
    return acos((a.x*b.x + a.y*b.y) / (sqrt(a.x*a.x + a.y*a.y)*sqrt(b.x*b.x + b.y*b.y)));
}


int main(){
#ifdef FFFeelipe
    freopen("/home/fffeelipe/c++/Contest/in.txt" ,"r",stdin);
    freopen("/home/fffeelipe/c++/Contest/out.txt","w",stdout);
#endif
    ios::sync_with_stdio(0);
      cin.tie(0);
    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll> a(m);
    for(int i = 0; i<n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    ll ans = 0;
    ll i = 0;
    ll dis = 0;
    ll page = 1;
    while(i < m){
        ll tempdis = 0;
        bool did = false;
        while(i < m and a[i]<= (page*k+dis<0LL?MAX:page*k+dis)){
            tempdis++;
            i++;
            did = true;
        }
        dis += tempdis;
        if(!did)
            page= max((a[i]-dis)/k-1, page +1);
        else
            ans++;
    }
    cout<<ans;
}