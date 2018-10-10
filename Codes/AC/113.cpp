#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int x[100001];
int main()
{
    std::ios::sync_with_stdio(false);
    int n,q,m;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> x[i];
    sort(x,&x[n]);
    cin >> q;
    for (int i=0; i<q; i++)
    {
        cin >> m;
        cout << upper_bound(x,&x[n],m)-x << '\n';
    }
    cout.flush();
    return 0;
}