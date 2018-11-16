

                                                                                                                       /*
STOP! TO COPY MY CODE YOU MUST TO FIND THE CHEAPPEST WAY TO GO OUT FROM LABIRINTH
start
  |
  V                                                                                                            
//5 7 3 1 5 8 9 
//1 7 4 8 9 2 1
//8 0 3 4 8 2 6
//9 3 5 8 9 4 7											
//4 5 7 2 4 8 3 
//1 8 6 7 1 2 3
//7 8 9 2 7 5 6 
//1 7 5 4 7 9 2 
              ^
              |
            finish                                                                                                     */
//CODED BY ...Adilet
#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define F first
#define S second
#define gg return 0;
#define wp return;
#define pii pair <int, int>
#define forn(i,start,end) for(int i = start; i <= end; ++i)

using namespace std;

const int maxn = (int)2e5 + 7;
const int INF = (int)1e9 + 7;
const double eps = 1e-9;
const long double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067;

ll k,m,d[maxn],mn = INF,mn2 = INF,mn3 = INF,mx = -INF,mn4 = INF,cnt;

map <int,int> mp;

bool u[maxn], flag;

ll ans;

ll x[maxn],y[maxn];

string s, s1;

ll n;

vector <int> g[maxn];

ll a[maxn],l,r;
/*
void dfs(int v){
	u[v] = 1;
	for(int i : g[v]){
		if(!u[i]){
			dfs(i);
		}
	}
}*/

pii p[maxn];

vector <string> v, v1;

bool ok;

void dfs(int v, int target){
	u[v] = 1;
	for(int i : g[v]){
		if(!u[i]){
			if(i == target && !flag){
				flag = 1;
				cout << "YES" << endl;
			}
			dfs(i,target);
		}
	}
}

int main(){
	//freopen("library.in", "r", stdin);
	//freopen("library.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i < n; ++i){
		cin >> a[i];
		g[i].pb(a[i] + i);
	}
	dfs(1,m);
	if(!flag){
		cout << "NO";
		gg
	}
	gg
}





