#include<bits/stdc++.h>
#define ll long long int
#define fr(i,n) for(ll i=0; i<n; i++)
#define fre(i,n) for(ll i=1; i<=n; i++)
#define pb push_back
#define mp(i,j) make_pair(i,j)
#define fi first
#define se second
#define pii pair<ll,ll>
#define ve vector
#define piii pair<ll,pii>
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;


bool find(ll* a, ll x, ll n)
{
    ll days = x, daysm=0;

    fr(i,n)
    {
        if(daysm> a[i])
          return true;

        ll temp = a[i]-daysm;
         if(days>=temp)
        {
            daysm+= days-temp;
            days -= days-temp;
        }
        else
          return false;
    }
    if(daysm==x)  
    return true;

  return false;

}

int main()
{
      FAST;

      ll n,m=-1;
      cin>>n;

      ll a[n];

      fr(i,n)
      {
        cin>>a[i];
        m = max(m, a[i]);
      }
      
      sort(a, a+n);

      ll start=m, end = 2*m;

      while(1)
      {
         bool is = find(a, end, n);
         if(is)
            break;
          start = end;
          end*=2;
      }
      
      ll ans = end;

      while(start<=end)
      {
         ll mid = (start+end)/2;

         //cout<<start<<" "<<end<<" "<<mid<<endl;
         bool is = find(a, mid,n);

         if(is==true)
         {
            ans = min(ans, mid);
            end = mid-1;
         }
         else
          start = mid+1;

      }
      cout<<ans<<endl;
}  