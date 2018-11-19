#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

#define sz(x) (int)(x.size())
#define fi(a,b) for(int i=a;i<b;++i)
#define fj(a,b) for(int j=a;j<b;++j)
#define fo(a,b) for(int o=a;o<b;++o)
#define fdi(a,b) for(int i=a-1;i>=b;++i)
#define fdj(a,b) for(int j=a-1;j>=b;++j)
#define fdo(a,b) for(int o=a-1;o>=b;++o)
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int, int> pii;
typedef double ld;
////////////////////////

int const N = 541;
ld const INF = 1e9 + 41;

string const YES = "YES";
string const NO = "NO";

int h, m, s, t1, t2;

ld ds, dm, dh;
ld dt1, dt2;
vector<ld> a;

int getnext(ld t){
	ld ret = INF;
	int id;

	fi(0, sz(a)){
		ld p = 0;
		if(a[i] >= t){
			p = a[i] - t;
		} else {
			p = (60 - t) + a[i];
		}
		if(p < ret){
			ret = p;
			id = i;
		}
	}

	return id;
}

int getprev(ld t){
	ld ret = INF;
	int id;

	fi(0, sz(a)){
		ld p = 0;
		if(t > a[i]) p = t - a[i];
		else p = (60 - a[i]) + t;
		if(p < ret){
			ret = p;
			id = i;
		}
	}

	return id;
}

void solve(){
	scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
	ds = s;
	dm = m + ds / 60;
	dh = (h * 5 % 60) + (m * 60 + s) / 3600.;
	dt1 = (t1 * 5 % 60);
	dt2 = (t2 * 5 % 60);

	a.pb(ds);
	a.pb(dm);
	a.pb(dh);
	
	if(getnext(dt1) == getnext(dt2) && getprev(dt1) == getprev(dt2)){
		printf("%s\n",YES.c_str());
		return;
	}
	

	printf("%s\n",NO.c_str());
}

int main(){
#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	solve();


	return 0;
}