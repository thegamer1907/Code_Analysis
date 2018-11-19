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


int h,m,s,t1,t2;

ld ah,am,as;
vector<ld> ang;

int get_p(int t){
	int id=0;
	t*=30;
	while (id<3 && ang[id]<t) id++;
	
	if (id==3) id=0;
	return id;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> h >> m >> s >> t1 >> t2;
	
	if (h==12) h=0;
	
	as=6*s;
	am=6*m+as/60;
	ah=30*h+am/12;
	
	
	ang.pb(as),ang.pb(am),ang.pb(ah);
	sort(all(ang));
	
	
	bool f=get_p(t1)==get_p(t2);
	
	cout << (f ? "YES\n" : "NO\n");
	
	return 0;
}
