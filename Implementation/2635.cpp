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

    int x,y,z;
    cin >> x >> y >> z;

    int ans = 3;

    ans = max(ans,(x+y)*z);
    ans = max(ans,x+y*z);
    ans = max(ans,x*y*z);
    ans = max(ans,x+y+z);
    ans = max(ans,x*y+z);
    ans = max(ans,x*(y+z));

    cout << ans << endl;

    return 0;
}