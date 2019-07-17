#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define boost ios_base::sync_with_stdio(false);	cin.tie(0);	cout.tie(0)
#define vi vector<int>
#define P push_back
#define F first
#define S second
#define debug(x) cout<<x<<" "
#define pi vector<pair<int,int> >
#define FOR(i,x,n) for(int i=x;i<n;i++)
#define all(a) a.begin(),a.end()
ll mod=1e9+7;
using namespace std;
int main(){
    boost;
    ll n,m,k;
    cin>>n>>m>>k;
    ll h=k;
    vector<ll> p(m);
    for(int i=0;i<m;i++)cin>>p[i];
    ll sum=0;
    //bool flag=false;
    ll coun=0;
    for(int i=0;i<m;i++){
        if(p[i]<=h)coun++;
        else {
            h+=coun;
            if(coun)sum++;
            coun=0;
            if(p[i]>h){
            ll g=p[i]-h;
            if(g%k!=0)
            g+=k-(g%k);
            h+=g;}
            coun++;
        }
        //debug(h);
    }
    if(coun)sum++;
    cout<<sum;


    

    return 0;
}