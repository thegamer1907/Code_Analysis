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

    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    double l = 0;
    double h = 2e9;
    double ans = 0;

    while(l <= h)
    {
        double mid = (l+h)/2;

        double temp = 0;
        bool flag = true;

        for(int i=0;i<n;i++)
        {
            if(temp < a[i]-mid)
            {
                flag = false;
                break;
            }

            temp = a[i] + mid;
        }

        if(temp < m)
            flag = false;

        if(flag)
        {
            h = mid - 1e-10;
            ans = mid;
        }
        else
            l = mid + 1e-10;
    }

    cout << setprecision(12) << ans << endl;

    return 0;
}