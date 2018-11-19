#include "bits/stdc++.h"
using namespace std;
#define ll long double
#define pp pair<ll,ll>
#define stime  clock_t start=clock();double duration;
#define etime duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;cout<<duration<<endl;
#define MOD 1000000007
#define rep1(v) for(auto&it:(v))
#define rep2(a) for(auto&ptr:(a))
#define dbg cout<<"hello\n";


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll h,m,s,x,y;
    cin>>h>>m>>s>>x>>y;
    if(h==12)h=0;
    ll a=h*30+(1/2.0)*m+(1/120.0)*s;
    ll b = 6*m+(1/10.0)*s;
    ll c=6*s;
    //cout<<a<<" "<<b<<" "<<c;

    if(x==12)x=0;
    if(y==12)y=0;
    if(x>y)swap(x,y);
    x=30*x,y=30*y;
    //cout<<" "<<x<<" "<<y<<endl;
    vector<ll>v;
    v.push_back(a),v.push_back(b),v.push_back(c),v.push_back(x),v.push_back(y);
    sort(v.begin(),v.end());
    if(x==v[0] && y==v[4])cout<<"YES";
    else {
        for(int i=0;i<=3;i++){
            if(v[i]==x && v[i+1]==y){
                cout<<"YES";
                return 0;
            }
        }
        cout<<"NO";
    }
    return 0;

}
