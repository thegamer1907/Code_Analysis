#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i = (a); i <= (b); ++i)
#define FORD(i,a,b) for(int i = (a); i >= (b); --i)
#define RI(i,n) FOR(i,1,(n))
#define REP(i,n) FOR(i,0,(n)-1)
#define mini(a,b) a=min(a,b)
#define maxi(a,b) a=max(a,b)
#define mp make_pair
#define pb push_back
#define st first
#define nd second
#define sz(w) (int) w.size()
typedef vector<int> vi;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<pii, int> para;
const int inf = 1e9 + 7;
const int maxN = 1e6 + 9;

int n, k;
int arr[maxN][5];
map<string, int> mapa;
string str[maxN];

bool sum(string s1, string s2) {
	REP(i, k) {
		if (s1[i] == '1' && s2[i] == '1') return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin>>n>>k;
	string zeroes = "";
	REP(i, k) zeroes += "0";
	REP(i, n) {
		string s = "";
		REP(j, k) {
			cin>>arr[i][j];
			s += (arr[i][j] + '0');
		}
		str[i] = s;
		mapa[s]++;
	}
	if (mapa[zeroes] > 0) {cout<<"YES"; exit(0);}
	REP(i, n) {	
		FOR(j, 0, (1<<k) - 1) {
			string s = bitset<4>(j).to_string();
			s = s.substr(4 - k, 4);
			//cout<<s<<endl;
			if (sum(s, str[i])) {
				//cout<<str[i]<<" "<<s<<endl;
				if (mapa[s] > 0) {
					cout<<"YES"; exit(0);
				}
			}
		}
	}
	cout<<"NO";
	return 0;
}
