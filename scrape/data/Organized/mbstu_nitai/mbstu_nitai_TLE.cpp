#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,p,k,w;
    cin>>n>>p>>m;
    vector<ll>vc;
    w = p;
    ll window = m,del = 0,op = 0;
    while(p--)
    {
        cin>>k;
        vc.push_back(k);
    }
    sort(vc.begin(),vc.end());
    auto it = vc.begin();
    while(it != vc.end())
    {
        auto up = upper_bound(vc.begin(),vc.end(), window);
        int upp = upper_bound(vc.begin(),vc.end(), window) - vc.begin();
        int dw = it - vc.begin();
        int how = upp - dw;
        if(how == 0)
            window+=m;

        else
        {
            op++;
            window+=how;
            it = up;
        }
    }
    cout<<op<<endl;

}