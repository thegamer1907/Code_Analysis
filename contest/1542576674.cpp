#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define fi first
#define se second
#define pd(x) printf("%d",x)
#define ps(x) printf(x)
#define sd(x) scanf("%d",&x)
#define pll(x) printf("%lld",x)
#define sll(x) scanf("%lld",&x)
#define MOD 1000000007
using namespace std;

int main() {
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  // getline(cin, string_name);
  int i, j, q, r, t;

  int n, k;
  cin>>n>>k;

  int p = (int)pow(2, k);
  int c[p];
  for(i=0; i<p; i++) c[i]=0;

  for(i=0; i<n; i++) {
    q=0;
    t=1;
    for(j=0; j<k; j++) {
      cin>>r;
      q+=t*r;
      t*=2;
    }
    c[q]++;
  }

  //for(i=0; i<p; i++) cout<<c[i]<<" "; cout<<endl;

  int temp=0;
  for(i=0; i<p; i++) {
    for(j=0; j<p; j++) {
      //cout<<"i="<<i<<" j="<<j<<" and="<<(i&j)<<endl;
      if (c[i]>0 && c[j]>0 && ((i&j)==0)) {
        //cout<<i<<" "<<j<<endl;
        temp=1;
        cout<<"YES";
        break;
      }
    }
    if (temp) break;
  }
  if (!temp) cout<<"NO";

  return 0;
}
