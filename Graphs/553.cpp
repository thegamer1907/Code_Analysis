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

    string s;
    cin >> s;

    while(t--)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i] == 'B' && s[i+1] == 'G')
                swap(s[i],s[i+1]), i++;
        }
    }

    cout << s << endl;

    return 0;
}