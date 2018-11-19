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

  string s;
  cin>>s;

  int n;
  cin>>n;

  string a[n];
  for(i=0; i<n; i++) cin>>a[i];

  int temp=0;
  for(i=0; i<n; i++) {
    if (a[i]==s) {
      temp=1;
      cout<<"YES";
      break;
    }
  }

  if (!temp) {
    temp=0;
    for(i=0; i<n; i++) {
      for(j=0; j<n; j++) {
        if (a[i][1]==s[0] && a[j][0]==s[1]) {
          temp=1;
          cout<<"YES";
          break;
        }
      }
      if (temp) break;
    }

    if (!temp) {
      cout<<"NO";
    }
  }

  return 0;
}
