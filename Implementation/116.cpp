#include <bits/stdc++.h>

using namespace std;

#define fi first 
#define se second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    if (a>b) swap(a, b);
    int i=0;
    while (n>2) {
        i++;
        
        a=(a+1)/2;
        b=(b+1)/2;
        if (a==b) {
            cout << i << endl;
            return 0;
        }
        n/=2;
    }
    cout << "Final!" << endl;
    return 0;
}