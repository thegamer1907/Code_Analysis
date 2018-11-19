using namespace std;
#include <bits/stdc++.h>
#define rep(i,n) for(auto i=0; i<(n); i++)
#define repd(i,n) for(auto i=(n)-1; i>=0; i--)
#define repf(i,a,b) for(auto i=(a); i<=(b); i++)
#define repe(i,l) for(auto i: l)
#define mem(x,val) memset((x),(val),sizeof(x));
#define rite(x) freopen(x,"w+",stdout);
#define read(x) freopen(x,"rt",stdin);
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define pb push_back
#define clr clear()
#define INF (1<<30)
#define ins insert
#define xx first
#define yy second
#define eps 1e-9
#define endl '\n'
#define _ ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.precision(10);cout<<fixed;
typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef long long ll;
typedef unsigned long long ull;

#define MOD (1e9 + 7)
#define MAX 1000007

int main() {_
	//Solution
	#ifdef LOCAL
		read("868A.in");
		rite("868A.out");
	#endif
	st pass; cin>> pass;
	int N; cin >> N;
	vs words;
	rep(i, N){
		st w;cin>> w;
		if(w==pass){cout<<"YES"<< endl; return 0;}
		words.pb(w);
	}
	rep(i,N){
		rep(j, N)
		{
			
				st a = "";
				a += (words[j][1]);
				a += (words[i][0]);
				st b = ""; 
				b += (words[i][1]);
				b += (words[j][0]);

				if(a == pass || b ==pass){cout<<"YES"<< endl; return 0;}
			
		}
	}
	cout << "NO"<< endl;
	
	
	
	
	
	
	
	
	
	
	#ifdef LOCAL
		//cout << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << endl;
	#endif
   	
	return 0;
}


//g++-4.9 -std=c++11 868A.cpp -o 868A -DLOCAL && ./868A




