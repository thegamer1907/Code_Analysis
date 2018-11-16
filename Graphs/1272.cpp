#include<bits/stdc++.h>
using namespace std;

//
//    __Vladimir__
//
#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
#define f(n) for(long long i = 0; i<n; i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define REP(i,a,b) for (ll i = a; i <= b; i++)
#define sz(a) int((a).size())
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int32_t main() {

	//Using text files for input output
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif

	IOS;
	
	int n,t,a;
	cin >> n >> t;
	vector <bool> visited(n+1,false);
	vi adj[n+1];
	REP(i,1,n-1){
	    cin >> a;
	    adj[i].pb(i+a);
	}
	stack <int> s;
	s.push(1);
	visited[1] = true;
	while(!s.empty()){
	    int v = s.top();
	    s.pop();
	    if(v == t){
	        cout << "YES";
	        return 0;
	    }
	    for(int i = 0; i < adj[v].size(); i++){
	        if(visited[adj[v][i]] == false){
	            s.push(adj[v][i]);
	            visited[adj[v][i]] = true;
	        }
	    }
	}
	cout << "NO";
	
	return 0;
}