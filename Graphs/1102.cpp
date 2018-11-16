#include <bits/stdc++.h>

#define ull                          unsigned long long int
#define ll                           long long int
#define endl                         '\n'
#define all(v)                       begin(v), end(v)
#define pb(x)                        push_back(x)
#define mp                           make_pair
#define ALLONS_Y                     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define contains(container, value)   container.find(value) != container.end()
#define rep(i,a,b)                   for(int i  = a; i < b; i++)
#define dbg(x)                       cerr << #x << " == " << x << "\n";
#define TIMESTAMP                    fprintf(stderr, "Execution time: %.3lf s.\n",(double)clock()/CLOCKS_PER_SEC)

using namespace std;

int main() {
	ALLONS_Y;
	
	int t,n;
	cin >> n >> t;
	int arr[n];	
	rep(i,1,n) cin >> arr[i];

	for(int i = 1; i <= n; i += arr[i]){	
		if( i == t){
			cout << "YES" << endl;
			exit(0);
		}
		else if( i > t) break;
	}
	
	cout << "NO" << endl;
	return 0;
}
