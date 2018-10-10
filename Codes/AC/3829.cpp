#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string receta; cin >> receta;
	int B = 0, S = 0, C = 0;

	for(char ingrediente : receta)
	{
		if(ingrediente == 'B') B++;
		else if(ingrediente == 'S') S++;
		else C++;
	}

	int nb, ns, nc; cin >> nb >> ns >> nc;
	int pb, ps, pc; cin >> pb >> ps >> pc;

	ll r; cin >> r;
	ll ans;

	ll i = 0, j = 1e13;
	while(i != j)
	{
		//Tomar punto medio
		ll m = (i+j+1)/2;
		ll plata = max(0LL,m*B-nb)*pb + max(0LL,m*S-ns)*ps + max(0LL,m*C-nc)*pc;
		if(plata > r) j = m-1;
		else i = m;
	}
	/* BUSQUEDA BINARIA! #FUN */

	cout << i << '\n';
	return 0;
}