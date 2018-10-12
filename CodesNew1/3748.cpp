#include <bits/stdc++.h>

using namespace std;

long n, m, a[100], a_max;

int main()
{
    cin >> n >> m;
    for(long i = 0; i < n;i++){
        cin >> a[i];
        a_max = max(a[i], a_max);
    }
    a_max += m;
    while(m > 0){
        sort(a, a + n);
        a[0]++;
        m--;
    }
    sort(a, a + n);
    cout << a[n - 1] << " " << a_max;
    return 0;
}
