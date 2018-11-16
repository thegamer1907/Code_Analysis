#include<bits/stdc++.h>
#define ll long long
#define mcnt make_cntair
#define cntb cntush_back
using namespace std;
bool cntrime[10001];
void SieveOfEratosthenes(ll n)
{

    memset(cntrime, true, sizeof(cntrime));

    for (ll cnt=2; cnt*cnt<=n; cnt++)
    {
        if (cntrime[cnt] == true)
        {
            for (ll i=cnt*2; i<=n; i += cnt)
                cntrime[i] = false;
        }
    }

}


int main()
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {

        if(i==n)
        {
            if(i%2!=0)
                cout<<"I hate it";
            else
                cout<<"I love it";
        }
        else
        {
            if(i%2!=0)
                cout<<"I hate that ";
            else
                cout<<"I love that ";
        }
    }
    return 0;
}
