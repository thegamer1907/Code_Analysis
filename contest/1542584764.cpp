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

int h, m, s;
int t1, t2;
bool a[N], b[N], ok[N];

int main () {
	cin >> h >> m >> s;
	cin >> t1 >> t2;
	h = h * 5;
	if(m + s != 0) {
		if(h == 60) h = 1;
		else h++;
	}
	if(s > 0){
		if(m % 5 == 0) {
			if(m == 0) m = 1;
			else m++;
		}
	}
	if(m == 0) m = 60;
	if(s == 0) s = 60;
	cerr << m << " "  << s << " " << h << endl;   
	bool bad = 0;
	{
		if(m != s){
			int x = m;
			int y = s;
			if(x != y){
				for(int i = min(x,y) + 1; i <= max(x,y) - 1; i++){
					ok[i] = 1;
				}
				if(ok[t1 * 5] != ok[t2 * 5]) bad = 1;
			}
		}
	}
	{
	     if(h != s){
			memset(ok, 0,sizeof(ok));
			int x = h;
			int y = s;
			if(x != y){
				for(int i = min(x,y) + 1; i <= max(x,y) - 1; i++){
					ok[i] = 1;
				}
				if(ok[t1 * 5] != ok[t2 * 5]) bad = 1;
			}
		}
	}
	{
	    if(m != h){
			memset(ok, 0,sizeof(ok));
			int x = m;
			int y = h;
			if(x != y){
				for(int i = min(x,y) + 1; i <= max(x,y) - 1; i++){
					ok[i] = 1;
				}
				if(ok[t1 * 5] != ok[t2 * 5]) bad = 1;
			}
		}
	}
	if(bad) cout << "NO";
	else cout << "YES";

return 0;
}