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

int32_t main()
{
    um.reserve(1<<15);
    um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    cin >> n >> t;

    int prev = 1;
    int ans = 0;

    for(int i=0;i<t;i++)
    {
        cin >> a[i];

        if(a[i] >= prev)
            ans += (a[i]-prev);
        else
            ans += (n+a[i]-prev);

        prev = a[i];
    }

    cout << ans << endl;

    return 0;
}