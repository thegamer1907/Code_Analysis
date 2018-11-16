#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    int a[30005];
    for(int i = 1; i <= n - 1; ++i)
        cin >> a[i];

    a[n] = 0;

    int i = 1;
    while(i <= t && i <= n){

        if(t == i){
            cout << "YES";
            return 0;
        }

        i += a[i];
    }

    cout << "NO";
    return 0;
}
