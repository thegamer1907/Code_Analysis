#include <bits/stdc++.h>
#define ss second
#define ff first
#define sij 1000001
#define mod 1000000007ll
#define endl "\n"
#define pb push_back
#define dbg(x) cout<<#x<<" "<<x<<" "
#define loop(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
using namespace std;
template<class t>t mag(t a){return a>0?a:-a;}
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vl;
typedef vector<bool> vb;
ll nb,ns,nc,pb,ps,pc,rb,rs,rc,r,entr;
string s;
bool pred(ll k){
    ll rqb=max(k*(rb)-nb,0ll),rqs=max(k*(rs)-ns,0ll),rqc=max(k*(rc)-nc,0ll);
    return r<(pb*rqb+ps*rqs+pc*rqc);
}
int main(){
    ios_base::sync_with_stdio(false);//cin.tie(0);cout.tie(0);
    cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    for(auto &ele:s)
        rb+=(ele=='B'),
        rs+=(ele=='S'),
        rc+=(ele=='C');
    ll lo=0,hi=mod*mod/1000;
    while(lo<hi){
        ll mid=lo+(hi-lo+1)/2;

        if(pred(mid)){
            hi=mid-1;
        }
        else{
            lo=mid;
        }
    }
    cout<<lo;
}
