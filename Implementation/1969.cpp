#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

int a[MAX],b[MAX];
bool vis[MAX];

vector <int> v;
vector <p> vp;
set <int> s;
set <p> sp;
map <int,int> m;
unordered_map <int,int> um;
queue <int> bq;

bool islucky(int x)
{
    while(x)
    {
        if(x%10 != 4 && x%10 != 7)
            return false;

        x /= 10;
    }

    return true;
}

int32_t main()
{
    um.reserve(1<<15);
    um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int x,y,z;
    x = y = z = 0;

    while(n--)
    {
        int t1,t2,t3;
        cin >> t1 >> t2 >> t3;
        x += t1;
        y += t2;
        z += t3;
    }

    if(x == 0 && y == 0 && z == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}