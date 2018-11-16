#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define FOR(i, n) for(int i=0; i<n; ++i)
#define ALL(v) v.begin(),v.end()
#define D(x) cout << (x) << endl;
#define Dn(x) cout << #x <<" : " << (x) << endl;

using namespace std;

typedef std::vector<int> VI;
typedef std::vector<VI> VVI;
typedef std::vector<VVI> VVVI;
typedef std::vector<bool> VB;
typedef std::vector<VI> VVB;
typedef std::vector<VVI> VVVB;

typedef pair<int, int> PI;
typedef pair<PI, int> PII;
typedef pair<double, double> PD;

int main(){
  ios::sync_with_stdio(false);

  int n, t;
  cin >> n >> t;

  string queue;
  cin >> queue;

  string queue_2(queue);

  FOR(i, t){
    for(int j=1; j<n; ++j){
      if(queue[j-1] == 'B' && queue[j] == 'G'){
        queue_2[j-1] = 'G';
        queue_2[j] = 'B';
      }
    }
    queue = queue_2;
  }
  cout << queue << "\n";
  return 0;
}
