#include <iostream>

using namespace std;

int vector[200];

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        int nr = 0;
        for(int j = 0; j < m; j++) {
            int p;
            cin >> p;
            nr = nr << 1 | p;
        }
        vector[nr]++;
    }
    int tot = 2;
    for(int i = 1; i < m; i++) {
        tot *= 2;
    }

    bool ok = false;
    if(vector[0] != 0) ok = true;
    for(int i = 0; i < tot; i++) {
        for(int j = 0; j < tot; j++) {
            if(i == j) continue;
            if(vector[i] != 0 && vector[j] != 0) {
                if((i & j) == 0) ok = true;
            }
        }
    }
    if(!ok) cout << "NO" << '\n';
    else {
        cout << "YES" << '\n';
    }
}
	 	  			  				 				  		  			