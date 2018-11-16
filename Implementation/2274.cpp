#include <bits/stdc++.h>
#define fori(i,a,b) for(int i=a,b_=b;i<=b_;++i)
#define ll long long
#define pb push_back
using namespace std;

int main()
{
  int n,k,w;
  cin >> k >> n >> w;
  ll s=0;
  fori(i,1,w) s+=1ll*i*k;;
  cout << max(s-n,0ll);
}
