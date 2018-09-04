#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {

ll n,k;
cin>>n>>k;

for (ll i=0;(1ll<<i)<=k;i++)
{ if (k & 1ll<<i) {cout<<i+1; return 0;}
}
}