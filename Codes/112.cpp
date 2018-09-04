#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int x[100001];
int main()
{
    std::ios::sync_with_stdio(false);
    int n,q,m,k;
    cin >> n;
    fill(x,&x[100001],0);
    for (int i=0; i<n; i++) {
        cin >> k;
        x[k]++; }

    for (int i=1;i<100001;i++) x[i]+=x[i-1];
    cin >> q;
    for (int i=0; i<q; i++)
    {
        cin >> m;
        cout << x[min(m,100000)] << '\n';
    }
    cout.flush();
    return 0;
}