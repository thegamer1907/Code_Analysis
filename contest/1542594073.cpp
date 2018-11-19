#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <ctime>
#include <unordered_map>
#include <iomanip>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define all(v) (v).begin(),(v).end()

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;

template<class T> ostream& operator<<(ostream& stream, const vector<T> v){ stream << "["; for (int i=0; i<(int)v.size(); i++) cout << v[i] << " "; stream << "]"; return stream; }
ll fpow(ll x, ll p, ll m){ll r=1; for (;p;p>>=1){ if (p&1) r=r*x%m; x=x*x%m; } return r;}
int gcd(int a, int b){ if (!b) return a; return gcd(b,a%b);}
ll gcd(ll a, ll b){ if (!b) return a; return gcd(b,a%b);}


int N; string s,a[200];
bool v[500],v2[500];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> s;
	cin >> N;
	
	bool f=0;
	int i;
	for (i=1; i<=N; i++){
		cin >> a[i];
		
		if (a[i]==s) f=1;
		v[a[i][0]]=1,v2[a[i][1]]=1;
		
	}
	
	f|=(v[s[1]] && v2[s[0]]);
	
	cout << (f ? "YES\n" : "NO\n");
	return 0;
}

