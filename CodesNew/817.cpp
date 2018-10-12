#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
#define rc(x) return cout<<x<<endl,0
#define pb push_back
#define dbg(x) cout << #x << '=' << x << '\n';
#define ll long long
#define sz size()
#define x first
#define y second
#define pi pair <int, int>
#define pii pair <pi, pi>
#define vi vector <int>
const ll mod = 1e9 + 7;
map <string, int> mp;
string s;
int n, m;
int both;

int main(){
	cin>>n>>m;
	for(int i=1; i<=n+m; i++){
        cin>>s;
        mp[s]++;
	}
	for(pair <string, int> i : mp){
        if(i.y==2) both++;
	}
	n=n-both;
	m=m-both;
	if(n>=m && both%2==1) rc("YES");
	if(n>=m+1 && both%2==0) rc("YES");
	rc("NO");
}