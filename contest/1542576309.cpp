// UTRECHT UNIVERSITY
#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second
#define pb push_back
#define eb emplace_back
#define rs resize
#define rep(i,a,b) for(auto i = (a); i != (b); ++i)
#define all(v) (v).begin(), (v).end()

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<string> vs;

const int INF = 2147483647;
const ld PI = acos(-1.0);
const int maxk = 10 + 1;


vvi calcK(string s){
	vvi cd = vvi(maxk);
	rep(k,0,maxk){
		cd[k] = vi(1 << maxk,0);
		if(k > s.length())
			continue;
		int b = 0;
		rep(j,0,k){
			b |= (s[j] == '1')*(1 << j);
		}
		cd[k][b] = 1;
		assert(b < (1<<k));
		if(k == 0)
			continue;
		rep(j,k,s.length()){
			b = (b >> 1);
			b |= (s[j] == '1')*(1 << (k-1));
			assert(b < (1<<k));
			cd[k][b] = 1;
		}
	}
	return cd;
}

int cmk(vvi &cd){
	for(int k = maxk-1; k>= 0; k--){
		int j = 0;
		for(;j<(1<<k);j++){
			if(!cd[k][j])
				break;
		}
		if(j<(1<<k))
			continue;
		return k;
	}
	assert(false);
	return -1;
}

void run()
{
	int n;
	cin >> n;
	vs s(n);
	rep(i,0,n)
		cin >> s[i];

	int m;
	cin >> m;
	int o = n+m;
	s.rs(o);
	vvi cds[o];
	int len[o];
	vs first(o);
	vs last(o);

	rep(i,0,n){
		cds[i] = calcK(s[i]);
		len[i] = min(20,(int)s[i].length());
		if(s[i].length() < 9)
			first[i] = last[i] = s[i];
		else{
			first[i] = last[i] = "";
			rep(j,0,9){
				first[i] += s[i][j];
				last[i] += s[i][s[i].length()-9+j];
			}
			//first[i] = string(s.begin(),s.begin()+9);
			//last[i] = string(s.end()-9,s.end());
		}
#ifdef LOCAL
		cout << i << " : " << first[i] + " " + last[i] <<  " tot " << len[i] << endl;
#endif
	}

	rep(i,n,o){
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		cds[i] = vvi(maxk);
		if(len[a]<20 && len[b] < 20){
			s[i] = s[a] + s[b];
			len[i] = min(20,len[a]+len[b]);
			cds[i] = calcK(s[i]);
			if(s[i].length() < 9)
				first[i] = last[i] = s[i];
			else{
				first[i] = last[i] = "";
				rep(j,0,9){
					first[i] += s[i][j];
					last[i] += s[i][s[i].length()-9+j];
				}
			}
		}
		else{
			len[i] = 20; // Long
			last[i] = last[a] + last[b];
			first[i] = first[a] + first[b];

			string fi = first[i], li = last[i];
			first[i] = last[i] = "";
			rep(j,0,9){
				first[i] += fi[j];
				last[i] += li[li.length()-9+j];
			}
			// Between
			string mid = last[a] + first[b];
			vvi cd = calcK(mid);


			// Merge
			rep(k,0,maxk){
				cds[i][k] = vi(1<<maxk,0);
				rep(j,0,(1<<k))
					cds[i][k][j] = cd[k][j] | cds[a][k][j] | cds[b][k][j]; 
			}

		}
#ifdef LOCAL
		cout << i << " : " << first[i] + " " + last[i] <<  " tot " << len[i] << endl;
#endif
		cout << cmk(cds[i]) << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	run();

	return 0;
}
