// UTRECHT UNIVERSITY
#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second
#define pb push_back
#define eb emplace_back
#define rs resize
#define rep(i,a,b) for(auto i = (a); i != (b); ++i)
#define all(v) (v).begin(), (v).end()

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;

const int INF = 2147483647;
const ld PI = acos(-1.0);

void run()
{

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  string s;
  int n;
  cin >> s >> n;
  vector<string> ar(n);
  rep(i,0,n){
    cin >> ar[i];
    if(ar[i] == s){
      cout << "YES" << endl;
      return 0;
    }
  }
  
  char c = s[0], d = s[1];
  rep(i,0,n){
    if(ar[i][1] == c){
      c = '_';
    }
    if(ar[i][0] == d){
      d = '_';
    }
  }
  
  if(c == '_' && d == '_'){
    cout << "YES" << endl;
  }
  else
    cout << "NO" << endl;
  
	return 0;
}
