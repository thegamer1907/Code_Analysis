#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define repi(i,a,n) for(int i=a;i<n;i++)
#define mp make_pair
#define fastIO ios::sync_with_stdio(false)
#define read freopen("in.in","r",stdin)
#define write freopen("out.out","w",stdout)
#define scf(xx) scanf("%d",&xx)
#define scfl(xx) scanf("%I64d",&xx)
#define All(a) a.begin(), a.end()


typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, ll> ii;
typedef long double ld;






int main(){
	string s;
	cin >> s;
	int n;
	string a[111];
	cin >> n;
	rep(i, n)cin >> a[i];
	rep(i, n)rep(j, n){
		string r = a[i] + a[j];
		if (r.find(s) != -1){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	

	return 0;
}

