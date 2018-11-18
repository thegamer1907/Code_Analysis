#include <bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

string psw, x;
vector<string> v;
int n;
set<string> s;

int main()
{
	cin >> psw;
	cin >> n;
	for(int i=0; i<n; i++) cin >> x, v.pb(x), s.insert(x);
	for(int i=0;i<v.size();i++)
		for(int j=0;j<v.size();j++)
		{
			x = "";
			x += v[i][1];
			x += v[j][0];
			s.insert(x);
		}
	if(s.count(psw) == 0) return cout << "NO" << endl, 0;
	cout << "YES" << endl;
}
