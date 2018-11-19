//******************************************************************
// Author: Huynh Nhat Minh
// Name of Problem: 868A
// Verdict: 
//******************************************************************
#include <bits/stdc++.h>

using namespace std;

#define fr(i,a,b) for (int i = (a), _b = (b); i <= _b; i++)
#define dw(i,a,b) for (int i = (a), _b = (b); i >= _b; i--)
#define rep(i,n) for (int i = 0, _n = (n); i < _n; i++)
#define sz(s) (int)s.size()
#define read(x) cin >> x
#define read2(x,y) cin >> x >> y
#define read3(x,y,z) cin >> x >> y >> z
#define out(x) cout << x
#define DEBUG(x) cout << #x << " = " << x << endl

#define ull unsigned long long
#define ll long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

//8 directions
//int dx[] = {-1,-1,-1, 0, 0, 1, 1, 1};
//int dy[] = {-1, 0, 1,-1, 1,-1, 0, 1};

//horse
//int dx[] = {-2,-2,-1,-1, 1, 1, 2, 2};
//int dy[] = {-1, 1,-2, 2,-2, 2,-1, 1};

const int dx[] = {-1, 0, 0, 1};
const int dy[] = { 0,-1, 1, 0};

typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define PI 3.1415926535897932385
#define INF 1000111222
#define eps 1e-7
#define maxN 100000

string words[105];

int main() {
	#ifndef ONLINE_JUDGE
	freopen("Test.INP","r",stdin);
	//freopen("Test.OUT","w",stdout);
	#endif
	
	string pass;
	cin >> pass;
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >>words[i];
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			string test = words[i] + words[j];
			
			for(int k = 0; k < test.size() - 1; k++) {
				if(test[k] == pass[0] && test[k + 1] == pass[1]) {
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}
	
	cout << "NO" << endl;
	
	return 0;
}

//Look at my code it's amazing !!!
