#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,k;
    cin >> n >> m >> k;
    ll p[m];
    for(ll i = 0 ; i < m ; i++)
    {
        cin >> p[i];
    }
    sort(p,p+m);
    ll count = 1;
    ll p_l = k;
    ll c = 0;
    for(int i = 0 ; i < m ;)
    {
        if(p[i] <= p_l)
        {
            c++;
            i++;
        }
        else
        {
            if(c != 0)
                count++;
            p_l = p_l + c;
            c = 0;
            if(p[i] > p_l)
            {
                p_l = p_l + k;
            }
        }
        
    }
    cout << count << endl;
    return 0;
}