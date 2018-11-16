#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <unordered_map>
#include <utility>

#define forn(i,a,b) for(int i = a; i < b; i++)
#define ll long long
#define MX 100001
#define pii pair<int,int>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int a[n-1];
    forn(i,0,n-1) cin >> a[i];
    int pos = 1;
    while(pos < t)
    {
        pos = pos + a[pos-1];
    }
    if(pos == t) cout << "YES";
    else cout << "NO";
    return 0;
}
