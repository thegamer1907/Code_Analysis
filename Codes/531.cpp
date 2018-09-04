#include <bits/stdc++.h>

typedef long long tint;


#define forsn(i,s,n) for(tint i=(s);i<(tint)(n); i++)
#define forn(i,n) forsn(i,0,n)
#define debug(x) cout << #x << " = "  << x << endl

using namespace std;

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

tint sumaDigitos (tint n)
{
	tint ans = 0;
	while (n > 0)
	{
		ans += n%10;
		n /= 10;
	}
	return ans;
}

const tint maxK = 10005;
tint ans[maxK];

int main()
{
	#ifdef ACMTUYO
		assert(freopen("entrada.in", "r", stdin));
	#endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	tint contador = 0;
	forn(i,100000000)
		if (sumaDigitos(i) == 10)
		{
			if (contador >= maxK)
				break;
			ans[contador++] = i;
		}
	tint k;
	while (cin >> k)
		cout << ans[k-1] << "\n";
			
	
	
	return 0;
}




