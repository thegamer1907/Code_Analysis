#include<bits/stdc++.h>
using namespace std;
long long int MAX=1e9,max_int=1e6;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
typedef set<ll> si;
typedef map<string, ll> msi;

#define REP(i, a, b, p) \
for (ll i = ll(a); i <= ll(b); i+=ll(p))
#define REPN(i, a, b) \
for (ll i = ll(a); i >=ll(b); i--)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,s=0,t=0,k,x;
    cin>>n;
    int a[n];
    REP(i,0,n-1,1)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s==n)
    {
        cout<<n-1;
        return 0;
    }
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    x=s;t=s;
    REP(i,0,n-1,1)
    {
       REP(j,i,n-1,1)
       {
            REP(k,i,j,1)
            {
              if(a[k]==0)
                x++;
              else
                x--;
            }
            t=max(x,t);
               x=s;
       }
    }
     cout<<t;

}
