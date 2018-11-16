#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin >> n >> t;
    t --;
    int a[n];
    a[n - 1] = 0;
    bool b[n];
    for (int i = 0; i < n; i++)
        b[i] = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int i = 0;
    while(b[i] == 0){
        b[i] = 1;
        i += a[i];
    }
    if (b[t] == 1)
        cout << "YES";
    else
        cout << "NO";
}