#include <iostream>
#include <cstdio>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <set>
using namespace std;
const int N = 20000;
const int INF = 1000000000;
struct edge{
	int v, w;
};
bool operator < (edge a, edge b){
	return a.w < b.w;
}
vector<edge> G[N];
int main(){
	//freopen("spantree2.in", "r", stdin);
	//freopen("spantree2.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	string s, c;
	cin >> s;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++){
		cin >> c;
		if (c == s){
			cout << "YES";
			return 0;
		}
		v.push_back(c);
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
		{
			string d = v[i] + v[j];
			if ((d[1] == s[0]) && (d[2] == s[1])){
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	
}
