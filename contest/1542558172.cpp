#include <bits/stdc++.h>
using namespace std;
typedef long long       ll;
typedef pair<int,int>   pii;
typedef vector<int>     vi;
typedef long double     ld;
#define MOD         1000000007
#define pb          push_back
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define endl        '\n'
#define PI          3.14159265359d
#define sz(x)       (int)x.size()
int main()
{
    //std::ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    int n,k,i,j,x,mask;
    cin>>n>>k;
    set<int> s;
    while(n--)
    {
        for(i=mask=0;i<k;i++)
        {
            cin>>x;
            mask|=(x<<i);
        }
        s.insert(mask);
    }
    vi v;
    for(auto it=s.begin();it!=s.end();it++)
        if(*it==0)
        {
            cout<<"YES";
            return 0;
        }
        else
            v.pb(*it);
    for(i=0;i<sz(v);i++)
        for(j=i+1;j<sz(v);j++)
            if((v[i]&v[j])==0)
            {
                cout<<"YES";
                return 0;
            }
    cout<<"NO";
    return 0;
}
