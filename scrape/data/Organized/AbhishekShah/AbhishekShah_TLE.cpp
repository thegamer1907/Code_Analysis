#include<bits/stdc++.h>
using namespace std;

#define f(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=1;i<=n;i++)
#define ll long long int
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,m,k,cnt=0,pos=0,a,pos_f,pos1=0;
    cin >> n >> m >> k;

    ll l = k;

    vector<ll> v;

    f(i,m)
    {   
        cin >> a;
        v.push_back(a);
    }
    while(pos!=m)
    {
        auto upper1 = upper_bound(v.begin(), v.end(), k);

        pos=(upper1 - v.begin());
        pos_f = pos-pos1;

        if(pos_f!=0)
            cnt++;

        if(pos==pos1)
            k = k + l;

        pos1 = pos;

        k = k + pos_f;
  //      cout << k << " " ;
    }

    cout << cnt;

    return 0;
}