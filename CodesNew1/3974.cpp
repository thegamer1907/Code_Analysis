#include <bits/stdc++.h>

#define forsn(i,s,n) for(tint i=(s);i<(tint)(n); i++)
#define forn(i,n) forsn(i,0,n)
#define dforn(i,n) for(tint i = tint(n)-1; i >= 0; i--)
#define debug(x) cout << #x << " = "  << x << endl

using namespace std;

typedef long long tint;

void imprimirVector (vector<tint> v)
{
	if (!v.empty())
	{ 
		tint p = tint(v.size());
		cout << "[";
		forn(i,p-1)
			cout << v[i] << ",";
		cout << v[p-1] << "]" << endl;
	}
	else
		cout << "[]" << endl;
}

const tint INFINITO = 2000000000000000000;

tint flechas (const vector<tint> &a, tint &x)
{
	tint n = tint(a.size()) -2;
	tint l = 0, r = n+1;
	while (r-l > 1)
	{
		tint c = (l+r)/2;
		if (a[c] <= x)
			l = c;
		else
			r = c;
	}
	
	if (l == n)
	{
		x = 0;
		l = 0;
	}
	return n-l;
}

int main()
{
	#ifdef ACMTUYO
		assert(freopen("entrada.in", "r", stdin));
	#endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	tint n,q;
	while (cin >> n >> q)
	{
		vector<tint> a (n+2,INFINITO);
		a[0] = 0;
		forsn(i,1,n+1)
			cin >> a[i];
		forn(i,n+1)
			a[i+1] += a[i];
			
		tint x = 0;
		forn(i,q)
		{
			tint k;
			cin >> k;
			x += k;
			cout << flechas(a,x) << "\n";
		}
		
	}
	
	return 0;
}




