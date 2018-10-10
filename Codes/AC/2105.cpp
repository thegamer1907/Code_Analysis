#include <bits/stdc++.h>

using namespace std;
#define ff(i, a, b) for(int i = (a), _b = (b); i <= _b; ++i)
#define rep(i, a, b) for(int i = (a), _b = (b); i < _b; ++i)
#define fd(i, a, b) for(int i = (a), _b = (b); i >= _b; --i)
#define SZ(x) ((int)(x).size())
#define db(x) cout << #x << " == " << x << endl
#define _ << ", " << 
#define X first
#define Y second
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define endl '\n'
#define pc putchar
#define gc getchar 

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;

const int N=2e5+11;
int n,k;

map<ii,ll> cii;
map<int,int> ci;

void enter(){
	cin>>n>>k;
}

void process(){
	ll res=0;
	int tmp;
	while (n--){
		cin>>tmp;
		if (tmp%k==0&&tmp/k%k==0){
			res+=cii[mp(tmp/k/k,tmp/k)];
		}
		if (tmp%k==0){
			cii[mp(tmp/k,tmp)]+=ci[tmp/k];
		}
		++ci[tmp];
	}
	cout<<res<<endl;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
//	freopen("test.inp","r",stdin);
//	freopen("test.out","w",stdout);

	enter();
	process();	

	return 0;
}