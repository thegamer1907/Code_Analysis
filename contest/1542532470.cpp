#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<
#define st first
#define nd second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n;
string pass,s;
bool ans1,ans2,ans3;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> pass;
	cin >> n;
	ans1=ans2=ans3=false;
	for(int i=0;i<n;i++){
		cin >> s;
		if(s==pass or (s[0]==pass[1] and s[1]==pass[0]) and !ans1) ans1=true;
		else if(s[1]==pass[0] and !ans2) ans2=true;
		else if(s[0]==pass[1] and !ans3) ans3=true;
	}
	if(ans1) return cout << "YES" << endl, 0;
	if(ans2 and ans3) return cout << "YES" << endl, 0;
	cout << "NO" << endl;
}
