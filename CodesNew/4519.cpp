#include "bits/stdc++.h"
using namespace std;

#define pb push_back
#define mp make_pair
#define fst first
#define snd second

#define fr(i,n) 	for(int i=0;i<n;i++)
#define frr(i,n)	for(int i=1;i<=n;i++)

#define ms(x,i)	memset(x,i,sizeof(x))
#define dbg(x)	cout << #x << " = " << x << endl
#define all(x)	x.begin(),x.end()

#define gnl cout << endl
#define olar cout << "pira" << endl

typedef long long int ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll llINF = 0x3f3f3f3f3f3f3f;

int vis[500500];

int main(){
	    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int n; cin >> n;
	vi seq;
	
	fr(i,n){
		int x; cin >> x;
		seq.pb(x);
	}

	sort(all(seq));
	reverse(all(seq));

	if(n==1){
		cout << 1 << endl;
		return 0;
	}

	int ini=0;
	int end=n/2;
	
	int cnt=n;

	while(ini<n && end<n){

		while(end<n && 2*seq[end]>seq[ini])
			end++;

		if(seq[ini]>=2*seq[end] && end<n){
			if(!vis[ini]){
				cnt--;
				vis[end]++;
				end++;
			}
		}

		ini++;

	}	

	cout << cnt << endl;


}