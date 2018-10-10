#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

#define pb push_back
#define ri(x) scanf("%d",&x)
#define rii(x,y) ri(x),ri(y)
#define ms(obj,val) memset(obj,val,sizeof(obj))
#define ms2(obj,val,sz) memset(obj,val,sizeof(obj[0])*sz)
#define FOR(i,f,t) for(int i=f;i<(int)t;i++)
#define FORR(i,f,t) for(int i=f;i>(int)t;i--)
#define EPS 1e-28
#define PI 2*acos(0.0)
#define y1 fdsad

typedef long long ll;
typedef vector<int> vi;


ll nb, ns, nc, pb, ps, pc, r;
int x = 0, y = 0, z = 0;
string s;

bool pos(ll cnt){
	ll cb = cnt*x, cs = cnt*y, cc = cnt*z;
	cb = max((ll)0, cb-nb), cs = max((ll)0, cs-ns), cc = max((ll)0, cc-nc);
	ll need = cb*pb + cs*ps + cc*pc;
	
	return need <= r;
	
}
ll bs(){
	ll l = 0, h = 1e13;
	while(h > l+1){
		ll m = (h+l)/2;
		if (pos(m)) l = m;
		else        h = m;
	}
	return l;
}

int main(){
	cin >> s;
	cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
	FOR(i, 0, s.size()){
		if(s[i] == 'B') x++;
		if(s[i] == 'S') y++;
		if(s[i] == 'C') z++;
	}
//	cout << x << ' ' << y << ' ' << z << endl;
	ll ans = bs();
	cout << ans << endl;
	
} 
