#include <bits/stdc++.h>
#define endl '\n'
#define forn(i, n) for(int i=0;i<n;i++)
#define lli long long int
#define pii pair<double,int>
#define fi first
#define se second
#define psi pair<int,pii>
#define pb push_back
#define vi vector<int>
#define vii vector< vi >

using namespace std;

const int MAXN = 1000001;

typedef long long Long;
const double ERROR = 1e-9;
const double M_2PI = 2 * M_PI;

bool Igual(double a, double b) { 
    return fabs(a - b) < ERROR;
}

struct Punto {
    double x, y;

    Punto() : x(), y() {}
    Punto(double X, double Y) : x(X), y(Y) {}

    bool operator<(const Punto& cmp) const {
        if (!Igual(x, cmp.x)) return x < cmp.x;
        return Igual(y, cmp.y)? false: y < cmp.y;
    }
 
    bool operator==(const Punto& cmp) const {
        return Igual(x, cmp.x) && Igual(y, cmp.y);
    } 
};

double GradARad(double grd) {
    return (grd * M_PI) / 180;
}
double RadAGrad(double rad) {
    return (rad * 180) / M_PI;
}

// Rotar un punto respecto al origen.:w:
// La rotacin se hace en orden CCW, para
// rotar en CW llamar Rotar(p, M_2PI - rad).
Punto Rotar(const Punto& p, double rad) {
    return Punto(p.x*cos(rad) - p.y*sin(rad),
                 p.x*sin(rad) + p.y*cos(rad));
}

double compute(int x) {
	return ((x % 12) * (-30) + 90 + 360) % 360;
}

double compute2(int x) {
	return ((x % 60) * (-6) + 90 + 360) % 360;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout<<fixed<<setprecision(4);
	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	vector<pii> num;
	num.pb(pii(compute2(s), 0));
	num.pb(pii(compute2(m) - (s / 60.0) * 6.0, 0));
	num.pb(pii(compute(h) - (m / 60.0) * 30.0 - (s / 3600.0) * 30.0, 0));
	num.pb(pii(compute(t1), 1));
	num.pb(pii(compute(t2), 1));
	forn(i, num.size())
		while(num[i].fi < 0.0)
			num[i].fi += 360.0;
	forn(i, 3)
		if(fabs(num[num.size() - 2].fi - num[i].fi) < ERROR || fabs(num[ num.size() -1 ].fi - num[i].fi) < ERROR) {
			cout<<"NO"<<endl;
			return 0;
		}
	sort(num.begin(), num.end());

	int f = 0;
	forn(i, num.size())
		if(num[i].se && num[(i + 1) % num.size()].se)
			f = 1;
	if(f) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
