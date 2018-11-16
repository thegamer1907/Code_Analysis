#include<bits/stdc++.h>
using namespace std;

//
//    __Vladimir__
//

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
	
	int n,m,count = 0;
	cin >> n;
	vll boy(n);
	REP(i,0,n-1){
	    cin >> boy[i];
	}
	sort(all(boy));
	cin >> m;
	vll girl(m);

	REP(i,0,m-1){
	    cin >> girl[i];
	}
	sort(all(girl));
	vector<bool> visited(m,false);
	REP(i,0,n-1){
	    REP(j,0,m-1){
	        if(visited[j])
	            continue;
	        else{
	            if(abs(boy[i] - girl[j]) <= 1){
	                visited[j] = true;
	                count ++;
	                //cout << count << endl;
	                break;
	            }
	        }
	    }
	}
	cout << count;
	return 0;
}