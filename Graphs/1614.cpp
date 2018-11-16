#include <bits/stdc++.h>

using namespace std;
int n, t, res = 1;
int const MAX = 3e4 + 5;
int arr[MAX];
bool trans(){
    res += arr[res];
    if(res == t) return true;
    if(res > t) return false;
    trans();
}
int main(){
    cin >> n >> t;
    for(int i = 1; i < n; i++) {
        cin >> arr[i];
    }
    if(trans()) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
