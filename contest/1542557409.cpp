#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>

using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef string s;
typedef set<int> si;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<string, string> mss;

#define err(x) cerr << #x << " = " << (x) << endl
#define inf 0x3f3f3f3f
#define infl 0x3f3f3f3f3f3f3f3fL
#define mod int(1e9+7)

bool found[205][15][1 << 15];
string strs[205];
int numstrs = 0;

string concat(int a_i, int b_i, int loc) {
  string a = strs[a_i];
  string b = strs[b_i];
  string mid = a.substr(max(0, (int)a.length() - 105)) + b.substr(0, 105);
  for( int i = 0; i < 15; ++i ) {
    for( int j = 0; j < (1 << 15); ++j ) {
      found[loc][i][j] = (found[a_i][i][j] | found[b_i][i][j]);
    }
  }
  for( int start = 0; start < mid.length(); ++start ) {
    for( int len = 1; len < 14; ++len ) {
      string sub = mid.substr(start, len);
      int num = 0;
      for( int i = 0; i < sub.length(); ++i ) {
        num |= (sub[i] == '1') << (sub.length() - 1 - i);
      }
      found[loc][sub.length()][num] = true;
    }
  }
  string ret = a + b;
  if( ret.length() > 220 ) {
    ret = ret.substr(0, 107) + ret.substr(ret.length() - 107);
  }
  return ret;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n, m;
  cin >> n;
  
  for( int i = 0; i < n; ++i ) {
    cin >> strs[numstrs++];
  }
  
  cin >> m;
  for( int i = 0; i < m; ++i ) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    strs[numstrs] = concat(a, b, numstrs);
    
    int most = 1;
    while( true ) {
      for( int i = 0; i < (1 << most); ++i ) {
        if( !found[numstrs][most][i] ) {
          goto here;
        }
      }
      most++;
    }
    here:
    most--;
    cout << most << endl;
    numstrs++;
  }
  
  return 0;
}
