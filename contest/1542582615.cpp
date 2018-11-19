#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define sz(x) ((int)(x).size())
#define EPS 1e-8
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;

int h, m, s, t1, t2, a, b;

int main() {
	
	cin >> h >> m >> s >> t1 >> t2;
	
	if((h==t1 || h==t2) && !m && !s) return cout << "NO", 0;
	
	if(t2<t1) swap(t1,t2);
	
	if(h<t2 && h>=t1) a++;
	else b++;
	
	t2 *= 5, t1 *= 5;
	if(!m) m = 60;
	
	if((m==t1 || m==t2) && !s) return cout << "NO", 0;
	
	if(m<t2 && m>=t1) a++;
	else b++;
	
	if(!s) s = 60;
	if(s==t1 || s==t2) return cout << "NO", 0;
	
	if(s<t2 && s>=t1) a++;
	else b++;
	
	if(!a || !b) cout << "YES";
	else cout << "NO";
	
}
