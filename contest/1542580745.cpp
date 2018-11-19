#include <functional>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <sstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstdio>
#include <bitset>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <map>
#include <set>


using namespace std;
#define sz(a) (int)a.size()
#define vi vector <int>
#define pb push_back
#define mp make_pair
#define ll long long        
#define sc scanf
#define pf printf    
#define f first
#define s second
// https://ideone.com/Yv4pND
   
const int inf = (int)1e9;
const int mod = inf + 7;
const double eps = 1e-9;
const double pi = acos(-1.0);
   
const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// ///////////////////////////////////////////////////////////////////// 
int main(){
	string s;
	cin >> s;
	int ch = 100;
	int jj = 100;
	int n;
	cin >> n;
	bool ok = false;
	for (int i = 0; i < n; ++i) {
		string x;
		cin >> x;
		if (x == s) {
			ok = true;
		}
		if (x[0] == s[1] && x[1] == s[0]) {
			ok = true;
		}
		if (x[0] == s[1] && ok == false){ 
			if (jj == 0) {
				ok = true;

			}
			else if (ch == 100) 
				ch -= 100;
			

		}
		if (x[1] == s[0]  && ok == false) {
			if (ch == 0)
				ok = true;
			else if (jj == 100){
				jj-= 100;
			}
		}


	}
	if (ok) {
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}   




