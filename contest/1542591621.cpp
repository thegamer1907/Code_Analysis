#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cstring>
#include <map>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <bitset>
#define f first
#define s second
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back
#define vi vector <int>
#define ld long double
#define pii pair<int, int>
#define y1 sda
using namespace std;    
const int N = int(3e5), mod = int(1e9)  + 7; 

string s;
int n;

string t[N];

int main () {
	cin >> s;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> t[i];
	}
	bool ok = 0;
	for(int i = 0; i < n; i++){
		if(t[i] == s) ok = 1;
		for(int j = 0; j < n; j++){
			if(t[i][1] == s[0] && t[j][0] == s[1]) ok = 1;
		}
	}
	if(ok) cout << "YES";
	else cout << "NO";

return 0;
}