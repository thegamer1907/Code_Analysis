#include <bits/stdc++.h>

using namespace std;

int n;
int a[100010];

main()
{
    ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    int cur = 0;
    int mn = 2e9, it = -1;
    for(int i = 0; i < n; i++){
        a[i] -= cur;
        if(a[i] <= 0){
            cout << i + 1;
            exit(0);
        }
        int cr = (a[i]+n-1) / n;
        if(cr < mn){
            mn = cr;
            it = i;
        }
        cur++;
    }
    cout << it + 1 << endl;
}
