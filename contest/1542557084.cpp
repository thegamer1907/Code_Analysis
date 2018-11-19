#include <bits/stdc++.h>

using namespace std;

#define topper top //XDDDDDDD

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " <<  x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n;
set<char> fst, snd;
set<string> bark;
string pass;

int main(){
  cin >> pass;
  cin >> n;

  for(int i=0; i<n; i++) {
    char f, s;
    cin >> f >> s;
    fst.insert(f), snd.insert(s);
    string b;
    b.pb(f), b.pb(s);
    bark.insert(b);
  }

  cout << ((bark.count(pass) or (fst.count(pass.back()) and snd.count(pass.front()))) ? "YES" : "NO") << endl;

	return 0;
}

