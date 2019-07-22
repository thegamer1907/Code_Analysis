#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define pll pair<long long,long long>
#define pdd pair<long double,long double>
#define mp make_pair
#define pb push_back
#define pf push_front
priority_queue<pll,vector<pll>,greater<pll> >pq;
priority_queue<ll,vector<ll>,greater<ll> >p;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    //sort(arr.begin(),arr.end());
    ll p=0,t=0,d;
    int i=0;
    while(i<m){
        ll r=(arr[i]-t)%k;
        if(r)
            r=k-r;
        ll q=(arr[i]-t)+r;
        ll d=t;
        while((arr[i]-t)<=q){
            i++;
            if(i==m)
                break;
            d++;
        }
        t=d;
        //cout<<i<<" "<<arr[i]<<" "<<t<<" "<<q<<"    ";
        p++;
    }
    cout<<p;
    return 0;
}