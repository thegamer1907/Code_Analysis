#include <bits/stdc++.h>

#define ll long long int
#define f first
#define s second
#define a7laInputDaWlaEh ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back

using namespace std;

///const long double eps = 1e-9;
int dX[8]={1,0, 0,-1,-1,-1, 1,1};
int dY[8]={0,1,-1, 0,-1, 1,-1,1};
int dx[4]={1,0, 0,-1};
int dy[4]={0,1,-1, 0};

vector<int> divi(int x)
{
    vector<int> v;
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x%i == 0)
        {
            v.pb(i);
            if(i != x/i) v.pb(x/i);
        }
    }
    sort(v.begin(),v.end());
    return v;
}

int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    ///readString scanf("%s", charArrName);
    a7laInputDaWlaEh;
    int n, m;
    cin >> n >> m;
    int arr[n+1], q[m], t[m];
    map<int, int> f, ans;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        ++f[arr[i]];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> q[i];
        t[i] = q[i];
    }
    sort(t, t+m);
    int sz = f.size();
    int curr = 1;
    for(int i = 0; i < m; i++)
    {
        while(curr != t[i])
        {
            --f[arr[curr]];
            if(!f[arr[curr]]) --sz;
            ++curr;
        }
        ans[ t[i] ] = sz;
    }
    for(int i = 0; i < m; i++)
        cout << ans[ q[i] ] << endl;
    return 0;

}


