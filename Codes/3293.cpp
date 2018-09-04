#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PSET(x,y) fixed<<setprecision(y)<<x
#define pb push_back
#define pf push_front
#define mp make_pair
#define pii pair<int,int>
#define pli pair<int,int>
#define pint pair<int,int>
#define pid pair<int,double>
#define vi vector<int>
#define ff first
#define ss second
#define ll long long
#define ull unsigned long long
#define SIZE 100010
#define MOD 1000000007
#define BIG 999999937

int main()
{
   fastio()
 
   //freopen("input.txt","r",stdin); 
   //freopen("output.txt","w",stdout);

   int n; cin>>n;
   ll a[n];
   for (int i = 0;i<n;i++) cin>>a[i];

   ll ans[n];
   
   for (int i = 0;i<n;i++) {
      ll temp;
      if ( ( a[i] - i )%n == 0 ) temp = (a[i] - i)/n;
      else temp = ( (a[i] - i)/n ) + 1;

      if ( a[i] <= i ) ans[i] = 1;
      else ans[i] = temp + 1;
   }
   
   int ind = -1;

   for (int i = 0;i<n;i++) {
      if ( ind == -1 ) ind = i;
      else if( ans[ind] > ans[i]  ) {
         ind = i;
      } 
      //cout<<ans[ind]<<endl;
   }   

   cout<<ind + 1;

   return 0;   
 
} 