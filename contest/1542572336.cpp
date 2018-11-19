#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define mp make_pair
typedef long long ll;
const ll inf = 1e12;

int main()
{
    ios_base::sync_with_stdio(false);

    ll n,k;cin>>n>>k;
    ll flag=0;
    vector<ll> v;
    set<ll> st;
    for(int i=0;i<n;i++)
    {
        ll a=0;
        for(int j=0;j<k;j++)
        {
            ll num;cin>>num;num*=pow(2LL,j);a+=num;
        }
        st.insert(a);
    }
    set<ll> :: iterator it;
    for(it=st.begin();it!=st.end();it++)v.pb(*it);
    //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

    //for(ll i: v)cout<<i<<" ";cout<<endl;

    if(v.size()==1){if(v[0]==0)flag=1;}
    else
    {
        for(int j=0;j<v.size();j++)
        {
            for(int l=j+1;l<v.size();l++)
            {
                ll p,q;
                p=v[j],q=v[l];
                ll flag2=1;
                for(int i=0;i<k;i++)
                {
                    ll cnt= p%2 +q%2;
                    if(cnt==2)flag2=0;
                    p/=2,q/=2;
                }
                if(flag2){flag=1;break;}
            }
            if(flag)break;
        }
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
}
