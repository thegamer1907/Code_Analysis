#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define x first
#define y second
#define sz(a) ((int)(a).size())
#define rep(i, a, b) for(int (i) = (a); (i) < (b); (i)++)
#define dec(i, a, b) for (int (i) = (a); (i) >= (b); (i)--)
#define clr(a,v) memset(a, v, sizeof(a))
#define all(a) (a).begin(),(a).end()
#define LOGN 16
#define MAXN 101010
#define EPS 1e-9
#define fcin ios_base::sync_with_stdio(false)
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,ll> pii;
typedef vector<int> vi;

#define M 22
int n, m, tt[222], tini[222], tfim[222];
string ini[222], fim[222];
char s[222][222];
set<string> tem[222][M];

int32_t main(){
	scanf("%d", &n);
	rep(i,0,n){
		scanf("%s", s[i]);
		ini[i] = fim[i] = string(s[i]);
		tini[i] = tfim[i] = tt[i] = strlen(s[i]);
		rep(j,0,tt[i]){
			string cur="";
			rep(k,j,tt[i]){
				cur += s[i][k];
				if(sz(cur) >= M) break;
				tem[i][sz(cur)].insert(cur);
			}
		}
	}
	scanf("%d", &m);
	rep(qq,0,m){
		int a, b, c = qq+n;
		scanf("%d%d", &a, &b);
		a--, b--;		
		ini[c] = ini[a];
		int ptr = 0;
		while(sz(ini[c]) < M && ptr < sz(ini[b])) ini[c] += ini[b][ptr], ptr++;
		ptr = 0;
		fim[c] = fim[b];
		reverse(all(fim[c]));
		while(sz(fim[c]) < M && ptr < sz(fim[a])) fim[c] += fim[a][sz(fim[a])-1-ptr], ptr++;
		reverse(all(fim[c]));
		
		rep(k,0,M){
			if(sz(tem[a][k]) > sz(tem[b][k])){
				tem[c][k] = tem[a][k];
				for(string ss : tem[b][k]){
					tem[c][k].insert(ss);
					if(sz(tem[c][k]) == (1<<k)) break;
				}
			}else{
				tem[c][k] = tem[b][k];
				for(string ss : tem[a][k]){
					tem[c][k].insert(ss);
					if(sz(tem[c][k]) == (1<<k)) break;
				}
			}
		}
		rep(k,0,M) rep(i,0,sz(fim[a])){
			int tl = sz(fim[a])-i, tr = k - tl;
			if(tr <= 0 || tr > sz(ini[b])) continue;
			string cur = "";
			rep(j,i,sz(fim[a])) cur += fim[a][j];
			rep(j,0,tr) cur += ini[b][j];
			tem[c][k].insert(cur);
		}
		int ans=0;
		rep(i,1,M) if(sz(tem[c][i]) == (1<<i)) ans=i;
		printf("%d\n", ans);
	}
}


