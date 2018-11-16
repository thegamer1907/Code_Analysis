#include <bits/stdc++.h>

using namespace std;

int n, k, a[30001], cnt = 1;

int main(){
    cin >> n >> k;
    for(int i = 1; i < n; i ++){
        cin >> a[i];
    }
    for(int i = 1; i <= n;){
        if(cnt == k){
            cout << "YES";
            return 0;
        }
        cnt += a[i];
        i += a[i];
        if(cnt == k){
            cout << "YES";
            return 0;
        }
        if(i > k) break;
    }
    cout << "NO";
    return 0;
}
