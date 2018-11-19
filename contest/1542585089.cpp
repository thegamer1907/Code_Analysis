#include <bits/stdc++.h>
using namespace std;
#define removeDuplicate(a) sort(a.begin(), a.end()); a.resize(distance(a.begin(), unique(a.begin(), a.end())));


int n, nBit; 
int mark[16]; 
bool check (int mask) { 
    int cnt[4];
	memset(cnt, 0, sizeof(cnt));  
	
    for (int value = 0; value < (1 << nBit); value++) if ((mask >> value) & 1) {  
		//cout << value << " "; 
		if (not mark[value]) {
			return false; 
		}
		for (int iBit = 0; iBit < nBit; iBit++) { 
			cnt[iBit] += (value >> iBit) & 1; 
		}
    }
    //cout << endl; 
    int lim = __builtin_popcount(mask) / 2;
    //cout << "lim = " << lim << endl;  
    for (int iBit = 0; iBit < nBit; iBit++) { 
    	if (cnt[iBit] > lim) return false; 
    }
    return true; 
}
int main() {
    #define file "in"
    //freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout);
    cin >> n >> nBit; 
    for (int i = 1; i <= n; i++) { 
    	int value = 0; 
    	for (int iBit = 0; iBit < nBit; iBit++) {
    		int p; 
    		cin >> p; 
    		value = value * 2 + p;
    	}
    	mark[value] = 1;  
    	
    }
    /*for (int value = 0; value < (1 << nBit); value++) { 
    	if (mark[value]) { 
    		cout << value << endl; 
    	}
    }*/
    for (int mask = 1; mask < (1 << (1 << nBit)); mask++) {
    	if (check(mask)) { 
    		cout << "YES"; 
    		return 0; 
    	} 
    }
    cout << "NO"; 
    return 0;
}