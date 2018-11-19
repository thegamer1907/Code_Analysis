#include <bits/stdc++.h>
#define endl '\n'
#define forn(i, n) for(int i=0;i<n;i++)
#define lli long long int
#define pii pair<int,int>
#define fi first
#define se second
#define psi pair<int,pii>
#define pb push_back
#define vi vector<int>
#define vii vector< vi >
#define DEBUG 0

using namespace std;

const int MAXN = 1000001;

int n,k;
int on[MAXN];
int num[MAXN];
int mat[100][100];
int dp[2][20][10];
string ans;

void bruta() {
	int f = 0;
	forn(mask, (1<<n)) {
		if(!mask) continue;
		int total = 0;
		vector<int> valid(k, 0);
		forn(j, n)
			if(mask & (1<<j)) {
				total++;
				forn(h, k)
					if(num[j] & (1<<h))
						valid[h]++;
			}

		int aux = 0;
		forn(i, k)
			if(valid[i] <= (total / 2))
				aux++;

		f |= (aux == k);
	}

	if(f) ans = "YES";
	else ans = "NO";
}

int get(int m,int p) {
	return ( rand() % p ) + m;
}

void gen() {
	n = get(1, 20), k = get(1, 4);
	forn(i, n)
		forn(j, k)
			mat[i][j] = get(0, 2);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	srand(time(NULL));
	int a;
	if(DEBUG) gen();
	else cin>>n>>k;
	forn(i, n) {
		int aux = 0;
		forn(j, k) {
			if(!DEBUG) cin>>a;
			else a = mat[i][j];
			aux |= ((1<<j) * a);
		}
		num[i] = aux;
	}

	vector<int> aux;
	forn(i, n)
		if(num[i] != (1<<k) - 1)
			aux.pb(num[i]);
	
	forn(i, aux.size())
		num[i] = aux[i];
	n = aux.size();

	forn(i, (1<<k)) {
		int cont = 0, aux = i;
		while(aux) {
			if(aux & 1) cont++;
			aux >>= 1;
		}
		on[i] = cont;
	}

	for(int id=n;id>=0;id--)
		for(int mask=(1<<k)-1;mask>=0;mask--)
			for(int cont=k+1;cont>=0;cont--) {
				if((on[mask] > 1 && cont >= 2 && cont <= k) || (!mask && cont > 0)) {
					dp[id & 1][mask][cont] = 1;
					continue;
				}
				if(id == n) {
					dp[id & 1][mask][cont] = 0;
					continue;
				}

				if(!(num[id] & mask)) dp[id & 1][mask][cont] = max(dp[(id + 1) & 1][mask][cont], dp[(id + 1) & 1][mask | num[id]][cont + 1]);
				else dp[id & 1][mask][cont] = dp[(id + 1) & 1][mask][cont];
			}
	
	// bruta();
	string otro;
	if(dp[0][0][0]) otro = "YES";
	else otro = "NO";
	cout<<otro<<endl;
	if(DEBUG)
	if(otro != ans) {
		cout<<n<<" "<<k<<endl;
		forn(i, n) {
			forn(j, k)
				cout<<mat[i][j]<<" ";
			cout<<endl;
		}
		exit(0);
	}
	return 0;
}
