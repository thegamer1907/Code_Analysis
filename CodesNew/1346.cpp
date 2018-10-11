#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<char,ll>m;
int main()
{
    string str;
    cin>>str;
    for(ll i=0; i<str.size(); i++)
        m[str[i]]++;
    ll B,S,C;
    cin>>B>>S>>C;
    ll costb,costs,costc;
    cin>>costb>>costs>>costc;
    ll money;
    cin>>money;
    ll lo=1;
    ll hi=10000000000000;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        ll o=0;
        ll temp1=max((m['B']*mid-B),o)*costb;
        temp1+=max((m['C']*mid-C),o)*costc;
        temp1+=max((m['S']*mid-S),o)*costs;
        if(temp1<=money)
        {
            lo=mid+1;
        }
        else
            hi=mid-1;
    }
    cout<<lo-1<<endl;
}
