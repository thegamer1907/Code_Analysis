#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define fi first
#define se second
#define __ ios_base::sync_with_stdio(0);cin.tie(0);
#define forn(i,a,n) for(int i = a; i < n ; i++)
typedef vector<int> vi;
typedef long long int lli;
typedef long long ll;
typedef pair<int,int> pii;
#define MAXN 100005
const lli inf = 1000000000000000LL;

int main(){__
	lli n,m;
	lli k;
	cin >> n >> m >> k;
	vector<lli> a(m);
	forn(j,0,m) cin >> a[j];
	lli i =0,ans=0;
	lli sum=0,pag=1ll;
	if(a[0]%k == 0){
		pag = a[0]/k;
	}
	else
		pag= a[0]/k+1;
	//cout << "pag inici " << pag << endl;
	while(i < m){
		if((a[i]-sum) <= k*pag){
			int cont =0;
			while(i < m && (a[i]-sum) <= k*pag){
				i++;
				cont++;
				if(i == m)
					break;
			}
			sum+=cont;
			ans++;
		}
		else
			pag++;
	}
	cout << ans;
	return 0;
}