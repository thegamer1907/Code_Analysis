#include<bits/stdc++.h>
#define ll           long long
#define vi           vector <int>
#define pii          pair<ll,ll>
#define vpii         vector<pii>
#define si           set<ll>
#define msi          map<string,ll>
#define pb           push_back
#define all(a)       (a).begin(),(a).end()
#define F            first
#define S            second
#define sz(x)        (int)x.size()
#define hell         1000000007
#define endl         '\n'
#define rep(i,a,b)   for(ll i=a;i<b;i++)
#define rp(i,a,b)	   for(ll i=a;i<=b;i++)
#define bs           binary_search
#define mp           make_pair
#define speed        ios_base::sync_with_stdio(false),cin.tie(NULL)
#define ubnd         upper_bound
#define lbnd         lower_bound
using namespace std;
//=====================

void solve()
{  
   ll n,y,x,z;
   cin >>n;
   vi a;
   z =n;  
   rep(i,0,n)
   {
       cin >>x;
       a.pb(x);
   }
   sort(a.begin(),a.end());
   y =(n/2)-1;
   if(y<0)
   {
       cout <<z;
       return;
   }
   auto it1 =next(a.begin(),n-1);
   auto it2 =next(a.begin(),y);
   while(1)
   {
        if(2*(*it2)<=(*it1))
        {
            it1--;
            z--;
        }
        if(it2==a.begin())
        break;
        it2--;   
   }
   cout <<z;
   return;
}


int main()
{

      ll TESTS;
      TESTS = 1;
     // cin>>TESTS;
      while(TESTS--)
      {
            solve();
      }

      return 0;
}