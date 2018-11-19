#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <ctime>
#include <unordered_map>
#include <iomanip>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define all(v) (v).begin(),(v).end()

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;

template<class T> ostream& operator<<(ostream& stream, const vector<T> v){ stream << "["; for (int i=0; i<(int)v.size(); i++) cout << v[i] << " "; stream << "]"; return stream; }
ll fpow(ll x, ll p, ll m){ll r=1; for (;p;p>>=1){ if (p&1) r=r*x%m; x=x*x%m; } return r;}
int gcd(int a, int b){ if (!b) return a; return gcd(b,a%b);}
ll gcd(ll a, ll b){ if (!b) return a; return gcd(b,a%b);}


int N,K; bool v[50];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> K;
	
	int i,j;
	for (i=1; i<=N; i++){
		int val=0;
		for (j=1; j<=K; j++){
			int d;
			cin >> d;
			val=val*2+d;
		}
		
		v[val]=1;
	}
	
	bool f=0;
	for (i=0; i<(1<<K); i++)
		for (j=0; j<(1<<K); j++)
			if (v[i] && v[j] && (i&j)==0)
				f=1;
			
	cout << (f ? "YES\n" : "NO\n");	
	return 0;
}
