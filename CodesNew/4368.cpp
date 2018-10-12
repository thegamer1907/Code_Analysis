#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair <int,int> pi;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <pair<int,int>> vp;
typedef vector <tuple<int,int,int>> vt;

#define WATCH(x) cout << (#x) << " is " << (x) << endl
#define F first
#define S second
#define T third
#define PB push_back
#define MP make_pair
#define MT make_tuple
#define rep(i,a,b) for(int i = a; i <= b; i++)

const ll MOD = 1e9 + 7;
const double PI = 2 * acos(0.0);

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,i,len,j;
    cin>>n;
    vector <string> S(n);
    for ( i = 0; i < n; i++) {
      cin>>S[i];
    }
    for (i = n-2 ; i >= 0 ; i--) {
      len = S[i+1].size();
      if (S[i]>S[i+1]) {
        string small = "#";
        for (j = 1;j<len;j++){
          if (S[i][j]==S[i+1][j]) {
            small += S[i][j];
          }
          else
            break;
        }
        S[i] = small;
      }
    }
    for(i = 0;i<n;i++)
      cout<<S[i]<<endl;

    return 0;
}
