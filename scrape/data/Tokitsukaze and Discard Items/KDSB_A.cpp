#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll , ll>m;
 
int main()
{
    ll n, m  , k;
    cin >> n >> m >> k;

    vector<ll >a;
    for(int i = 0 ; i < m ; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }

    ll t = m;
    ll ans = 0;
    ll pos = 0;
    ll dif = 0;
    
    while(t > 0 && pos < m)
    {
       // cout << t << endl;
       long double pg = ceil((long double)((a[pos]-dif))/k);
     // cout << dif << endl;
      //  cout << pg << endl;
       ll count = 0;
       while(pos < m)
       {
          
           long double c = ceil((long double)((a[pos]-dif))/k);
           //cout << c << " " << pg << endl;
           if(c == pg)
           {
               count++;
               pos++;
           }
           else
           {
               break;
           }
       }
      //  cout << t << endl;
       t -= count;
       ans++;
       dif += count;
    }
    cout << ans;
}