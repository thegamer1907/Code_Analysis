#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll sz = 1e7;
vector <bool> prime(sz + 1000, true);
vector <ll> f(sz + 1000, 0), pref(sz + 1000, 0);
vector <ll> a(sz + 100, 0);
void erat()
{
    ll i,j;
    prime[1] = false;
    i = 2;
    while (i<=sz+ 10)
    {
        j = i + i;
        while (j<=sz + 10)
        {
            prime[j] = false;
            j+=i;
        }
        i++;
        while (!prime[i]) i++;
    }
}
int main()
{
  //  freopen("input.txt","r",stdin);
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
   // cout<<"sz = "<<sz<<endl;
    ll n, i, j;
    erat();
        cin>>n;
        for(i=0; i<n; i++)
        {
            ll q;
            cin>>q;
            a[q]++;
        }
    for(i = 2; i<=sz; i++)
    {
        if (prime[i])
        {
            for(j = i; j<=sz + 10; j+=i)
                f[i]+=a[j];
        }
    }
    pref[0] = 0;
    pref[1] = 0;
    for(i = 2; i<=sz + 10; i++)
        pref[i] = pref[i - 1] + f[i];
    ll k;
  //  cout<<"ok"<<endl;
    cin>>k;
    for(i=0; i<k; i++)
    {
        ll q, w;
        cin>>q>>w;
       // cout<<"i = "<<i<<" q = "<<q<<"  w = "<<w<<endl;
        q = min(q, sz+5);
        w = min(w, sz+5);
        /*
        cout<<"i = "<<i<<" q = "<<q<<"  w = "<<w<<endl;
        cout<<endl;
        */
        cout<<(pref[w] - pref[q-1])<<endl;
    }
   // cout<<"okkk"<<endl;
    return 0;
}
