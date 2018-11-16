//  B E A U T I F U L   L I F E   \\

#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define PI 3.14159265
#define newl cout<<endl;
#define alexxerr ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const ll N = 1e6+9;
const ll MOD = 1e9 +7;

vector <ll>:: iterator it;

 int main(int argc, char const *argv[]) {
   alexxerr

   ll n;
   cin>>n;

   vector <ll> v,u,w;

   for (int i = 0; i < n; ++i)
   {
   	 ll x,y,z;
   	 cin>>x>>y>>z;
   	 v.push_back(x);
   	 u.push_back(y);
   	 w.push_back(z);
   }
   ll v1(0),u1(0),w1(0);

   for (int i = 0; i < n; ++i)
   {
   	v1 += v[i];
   	u1 += u[i];
   	w1 += w[i];
   }

   if(v1 == 0 && u1 == 0 && w1 == 0)
   	cout<<"YES";
   else cout<<"NO";

   return 0;

 }
