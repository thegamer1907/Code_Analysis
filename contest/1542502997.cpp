// Coded by R.amazing
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ld long double
#define mp make_pair

#define alla a.begin(), a.end()
#define allx x.begin(), x.end()
#define allv v.begin(), v.end()
#define alls s.begin(), s.end()

#define sz size
#define F first
#define S second
using namespace std;
const int INF = 1e9;
void boost(){
	 ios_base::sync_with_stdio(0);
}
string p;
int n;
string x[101];
bool ok;
int main(){
	boost();
	// freopen (" .txt", "r", stdin);
	// freopen (" .txt", "w", stdout);
	cin >> p >> n;
	for(int i=0 ; i<n ; i++){
		cin >> x[i];
	}
	char a = p[0];
	char b = p[1];
	for(int i=0 ; i<n ; i++){
		char c = x[i][1];
		if(x[i] == p){
			cout << "YES" , exit (0);
		}
		if(c == a){
			for(int j=0 ; j<n ; j++){
				char d = x[j][0];
				if(d == b){
					cout << "YES" , exit (0);
				}
			}
		}
	}
	cout << "NO";
	exit(0);
		// set <int> :: iterator it;
		// for(int it = s.begin() ; it != s.end() ; it++)
}

