#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<map>
#include<string>
#include<string.h>
#include<algorithm>
#include<string.h>
#define ll long long int
#define Fi(a,b) for (ll i = a ; i<=b ;i++ )
#define Fj(a,b) for (ll j = a ; j<=b ;j++ )
#define Fk(a,b) for (ll k = a ; k<=b ;k++ )
#define pb push_back
#define BR cout<<endl
#define KALA ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define mod 1000000007
#define I cin>>
#define O cout<<
#define XXX return 0
using namespace std;

int main()
{
   KALA;
   ll t;
   //I t;
   t=1;
   while(t--)
   {
      ll n,k;
      I n;
      I k;
      n--;
      ll a[n];
      Fi(0,n-1)
      I a[i];

      set<ll>hole;
      hole.insert(1);
      ll val;
      //Fi(0,n-1)
      for(ll i=0;i<n; )
      {
      	i=i+a[i];
      	val=i+1;
      	hole.insert(val);
      }
      //for(auto itr : hole)
	  //O itr<<" ";

	  //BR;
      if(binary_search(hole.begin() ,hole.end() , k ) )
	  O "YES"<<endl;
	  else
	  O "NO"<<endl;
   }
	XXX;
}

