#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll>v;

int main()
{
    ll a,b,c,d,cur=0;
    cin>>a>>b;
    for(ll x=0; x<a; x++){
        cin>>c;
        cur+=c;
        v.push_back(cur);
    }
    vector<ll>::iterator it;
    cur=0;
    while(b--){
        cin>>d;
        cur+=d;
        it=lower_bound(v.begin(), v.end(),cur);
        if(cur>=v[a-1]){
                cout<<a<<endl;
                cur=0;
        }
        else{
            if(*it==cur){
                cout<<a-(it-v.begin())-1<<endl;
            }
            else{
                cout<<a-(it-v.begin())<<endl;
            }
        }
    }
    return 0;
}
