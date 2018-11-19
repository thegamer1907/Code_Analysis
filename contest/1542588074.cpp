#include <bits/stdc++.h>
using namespace std;

#define MAXN 200
#define X first
#define Y second

typedef long long ll;
int a[3];

int f(int x)
{
    for (int i = 0; i <= 1; ++i)
        if (x > a[i] && x < a[i + 1])
            return i;
    return 2;
}

int main()
{
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    if (h == 12) h = 0;
    int t = h * 3600 + m * 60 + s;
    a[0] = t;
    a[1] = (m * 60 + s) * 12;
    a[2] = s * 720;
    //cout << a[0] << " " << a[1] << " "<< a[2] << endl;
    sort(a, a + 3);
    
    t1 = t1 * 3600;
    t2 = t2 * 3600;
    //cout << t1 << " "<< t2 << endl;
    
    bool flag = false;
    t1 = f(t1);
    t2 = f(t2);
    puts(t1 == t2? "YES":"NO");
    
    
    return 0;
}