#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,mx = -1;
    cin >> n >> m;
    vector <int> t(n,0);
    vector <int> free(n, 0);
    for(int i = 0; i < n; i++){
        cin >> t[i];
        if(t[i] > mx) mx = t[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        free[i] = mx - t[i];
        sum += free[i];
    }
    int k = m - sum;
    if(k < 0) k = 0;
    int f = mx + k / n;
    if(k % n > 0) f++;
    cout << f << " " << mx + m;
    return 0;
}
