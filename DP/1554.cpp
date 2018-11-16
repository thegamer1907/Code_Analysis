#include "bits/stdc++.h"
using namespace std;
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define fr(i,n)     for(int i=0;i<n;i++)
#define frr(i,n)    for(int i=1;i<=n;i++)
#define ms(x,i) memset(x,i,sizeof(x))
#define dbg(x)  cout << #x << " = " << x << endl
#define all(x)  x.begin(),x.end()
#define gnl cout << endl
#define olar cout << "olar" << endl
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef pair<ll,ll> pll;
typedef vector< vector<ll> > matrix;
const int INF = 0x3f3f3f3f;
const ll llINF = 0x3f3f3f3f3f3f3f;  
const int MAXN = 100100;
const ll mod = 1e9+9;

int acum[110],v[110];
int memo[110];
int n;

int solve(int ind){

	if(ind>n)	return 0;

	int &pdm=memo[ind];
	if(pdm==-1)	return pdm;

	int atual;
	if(v[ind]==0)	atual=1;
	else			atual=-1;

	return max(atual,atual+solve(ind+1));

}

int main(){

	cin >> n;
	int cnt=0;
	frr(i,n){
		cin >> v[i];
		if(v[i])	cnt++;
	}
	
	int aux=-1;

	frr(i,n){
		ms(memo,0);
		aux=max(aux,solve(i));
	}

	cout << aux + cnt << endl;

}