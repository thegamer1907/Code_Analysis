#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int sum = 0;
    int maxm = 0;
    for(int i = 0; i <n; i++){
        int x;
        cin >> x;
        maxm = max(maxm, x);
        sum += x;
    }
    sum += m;
    if (sum%n == 0)
        cout << max(sum/n, maxm);
    else
        cout << max(sum/n + 1, maxm);
    cout << " " << maxm + m;
}
