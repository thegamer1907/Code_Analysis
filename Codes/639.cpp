#include<bits/stdc++.h>
using namespace std;

int ds(int n){
    int ans = 0;
    while(n > 0){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main () {
    int n, p = 19;
    cin >> n;
    while(n > 0){
        if (ds(p) == 10)
            n--;
        p++;
    }
    cout << p - 1 << endl;
}
