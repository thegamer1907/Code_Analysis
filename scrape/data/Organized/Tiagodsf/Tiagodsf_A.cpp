#include <bits/stdc++.h>
#define PI 3.14159265358979323846
#define mod 998244353
#define INF 999999999
#define MAX 5010
#define f first
#define s second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vii vector< pair<int,int> >
#define sws ios_base::sync_with_stdio(false);cin.tie(NULL)
#define forn(i, n) for(int i=0; i<(int)(n); i++)
#define endl '\n'

using namespace std;

int main()
{
	sws;
	
	ll N, M, K, aux, total, pagina, inc;
	vector<ll> val;

	cin >> N >> M >> K;

	for(int i=0;i<M;i++)
	{
		cin >> aux;
		val.pb(aux);
	}

	total=0;
	inc=0;
	aux=0;
	pagina=K;
	if(val[0]>pagina)
	{
		pagina+=((val[0]-pagina)/K +1)*K;
		if((val[0]-inc-pagina)%K==0)
			pagina-=K;
	}

	for(int i=0;i<M;i++)
	{
		if(val[i]-inc<=pagina)
			aux++;
		else
		{
			total++;
			inc+=aux;
			aux=0;
			if(val[i]-inc>pagina)
			{
				pagina+=((val[i]-inc-pagina)/K +1)*K;
				if((val[i]-inc-pagina)%K==0)
					pagina-=K;
			}
			i--;
		}
	}

	if(aux)
		total++;

	cout << total << endl;

	return 0;
}