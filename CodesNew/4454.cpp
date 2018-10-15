#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>
#include <vector>
#include <string>
#include <iomanip>
#include <deque>
#include <map>
using namespace std;

typedef long long ll;

#define all(v) v.begin(), v.end()
#define pb push_back
#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl; 

const int maxn = 600 * 1000 + 100;
const ll mod = 1e9 + 7;
const ll inf = 2 * 1e18;

int n, m, k, a[maxn];
vector<string> st;
char c(int i,int j){
	if (st[i].size() >= j + 1)return st[i][j];
	else return '.';
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n;
	st.push_back("");
	for (int i = 1; i <= n; i++){
		string s; cin >> s;
		s.erase(0, 1);
		st.push_back(s);
	}
	for (int i = n - 1; i >= 1; i--){
		for (int j = 0; j < (int)max(st[i].size(),st[i+1].size()); j++){
			if (c(i,j) < c(i+1,j))break;
			else if (c(i, j) == c(i+1, j))continue;
			else { st[i].erase(j, st[i].size()-j); break; }
		}
	}
	for (int i = 1; i <= n; i++){
		cout << "#" << st[i] << endl;
	}
	return 0;
}