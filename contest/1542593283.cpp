#include <bits/stdc++.h>

#define ld long double
#define ll long long
#define ull unsigned long long

#define f first
#define s second

#define endl '\n'
#define pii pair <ll, ll>

#define ios ios_base::sync_with_stdio(0), cin.tie()
#define pb push_back
#define mp make_pair

#define pi 3.14159265358979323846264
#define y1 abacaba

using namespace std;

const int MXN = 2e6 + 30;
const int MAXN = 2e3 + 2;
const ll INF = 1e9 + 7;

const ll BINF = 1e15;
const int MOD = 1e9 + 7;
const ld EPS = 1e-15;   
const ll dx[] = {0, 0, 1, -1};
const ll dy[] = {1, -1, 0, 0};

string s;
int n;
string a[MXN];
int q;
int qq, qqq;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    cin >> s;
    cin >> n;
    for(int i = 1; i <= n; i++){
    	cin >> a[i];
    	if(a[i] == s) q = 1;
    } for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++){
    		if(a[i][1] == s[0] && a[j][0] == s[1]) q = 1;
    	}
    } if(q){
    	cout << "YES";
    } else{
    	cout << "NO";
    }
    return 0;
}