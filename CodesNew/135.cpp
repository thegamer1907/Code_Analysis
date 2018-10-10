#include <bits/stdc++.h>

typedef unsigned long long int ull;
typedef long double ld;
typedef long long int ll;

#define fori(n)  for (ll i=0; i<n; i++)
#define forj(n)  for (ll j=0; j<n; j++)
#define ForA3(n)  for (ll k=0; k<n; k++)
#define ForN1(n)  for (ll i=1; i<=n; i++)
#define ForN2(n)  for (ll j=1; j<=n; j++)
#define ForN3(n)  for (ll k=1; k<=n; k++)

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pair pair<int,int>
#define F first
#define S second
#define mem(x) memset(x,0,sizeof(x))
#define PI 3.1415926535897932384626433832795l
#define deci(n) cout<<fixed<<setprecision(n);
using namespace std;
int main(){
ll n,m;
double max=0.0000000000;
cin>>n>>m;
ld a[n];
fori(n){
    cin>>a[i];
}
sort(a,a+n);
max=(a[0]-0)*2;
fori(n-1){
    if(a[i+1]-a[i]>max)max=a[i+1]-a[i];
}

max=max/2;
if(max<(m-a[n-1]))max=m-a[n-1];
cout<<setprecision(10) <<max;
return 0;
}











