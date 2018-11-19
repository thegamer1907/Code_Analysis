#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define p(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define s(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define sf(x) scanf("%lf", &x)
#define bitcount __builtin_popcountll
#define INF 1e18
#define endl '\n'
#define FIO ios_base::sync_with_stdio(false)
using namespace std;
#define M 1000000007
#define MAX 300010
#define MLOG 18

int main(){
	string s;
	cin >> s;
	int n;
	cin >> n;
	string st[n];
	for(int i = 0; i < n; ++i){
		cin >> st[i];
		if(st[i] == s){
			cout << "YES";return 0;
		}
	}
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(st[i][1] == s[0] && st[j][0] == s[1]){
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO";
}