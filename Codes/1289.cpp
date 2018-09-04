#include <iostream>
#include <vector>
#include <set>
using namespace std;

int n, m, f;
vector <string> p, e;
set <string> d;
string s;

int main()
{
    cin >> n >> m;
    for(int i = 0 ; i < n && cin >> s ; i++) p.push_back(s), d.insert(s);
    for(int i = 0 ; i < m && cin >> s ; i++) e.push_back(s);
    for(int i = 0 ; i < m ; i++){
        int x = d.size();
        d.insert(e[i]);
        f += (x==d.size());
    }
    n -= f; m -= f;
    if(n > m || (m == n && f%2)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
