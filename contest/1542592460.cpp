#include <bits/stdc++.h>
using namespace std;
#define removeDuplicate(a) sort(a.begin(), a.end()); a.resize(distance(a.begin(), unique(a.begin(), a.end())));
const int N = 105; 
string s; 
int n; 
string t[N]; 

int main() {
    #define file "in"
    //freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout);

    cin >> s; 
    cin >> n; 
    for (int i = 1; i <= n; i++) { 
    	cin >> t[i]; 
    }
    for (int i = 1; i <= n; i++) { 
    	for (int j = 1; j <= n; j++) { 
    		string a = t[i] + t[j]; 
    		for (int i = 0; i < 3; i++) { 
    			if (a[i] == s[0] && a[i + 1] == s[1]) {
    				cout << "YES"; 
    				return 0; 
    			}
    		}
    	}
    }
    cout << "NO"; 
    return 0;
}