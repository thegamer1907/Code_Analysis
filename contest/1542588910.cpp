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

bool vis[12*60*60] = {};
bool pos[12*60*60] = {};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int h,m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;
	h %= 12; t1 %= 12; t2 %= 12; 
  int n = 12*60*60;
  rep(i,0,n){
    pos[i] = true;
    vis[i] = false;
  }

  pos[h*60*60 + m*60+s] = false;
  pos[m*12*60 + 12*s] = false;
  pos[12*60*s] = false;
  
	t1 *= 60*60;
	t2 *= 60*60;

  int i = t1;
  while(pos[i]){
    i = (i+1)%n;
    if(i == t2){
      break;
    }
  }
  int j = t1;
  while(pos[j]){
    j = (j+n-1)%n;
    if(j == t2){
      break;
    }
  }
  if(i == t2 || j == t2){
    cout << "YES" << endl;
  }
  else
    cout << "NO" << endl;
  
	return 0;
}
