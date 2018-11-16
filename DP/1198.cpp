#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100], c[100];
    int b[100][100];
    int n, d = 0, S = -2;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> c[i];
        d+=c[i];
        if(c[i] == 1) {
            a[i] = -1;
        } else a[i] = 1;
    }

    for(int i = 0; i < n; i++) {
        b[i][i] = a[i];
        S = max(S, b[i][i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            b[i][j] = b[i][j-1] + a[j];
            S = max(S, b[i][j]);
        }
    }
    cout << S+d;
    return 0;
}
