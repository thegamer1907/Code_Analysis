#include <bits/stdc++.h>

using namespace std;

int n, x, rs, mn = 2e9;

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> x;
        x -= i - 1;
        if (x <= 0) return cout << i, 0;
        x = x / n + bool(x % n);
        if (x * n < mn) mn = x * n, rs = i;
    }
    
    cout << rs;
	return 0;
}