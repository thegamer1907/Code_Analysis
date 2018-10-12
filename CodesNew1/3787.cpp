#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, ma = 0, k;
    scanf("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]), ma = max(ma, arr[i]);
    
    k = ma + m;
    
    for(int i = 0; i < n; i ++)
        m -= min(ma - arr[i], m);
        
    printf("%d %d", ma + m / n + (m % n != 0), k);
    return 0;
}