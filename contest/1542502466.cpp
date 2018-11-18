#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MAXN = 100050;

ll f[55][MAXN];
ll n,k;
ll a[MAXN];
ll tmp[MAXN];
ll b[MAXN];
ll c[MAXN][5];
ll delta[MAXN];
ll ql,qr,sum;

void query(int l,int r)
{
    while (qr > r)
    {
        //cout << a[qr] << endl;
        sum -= delta[b[a[qr]]];
        b[a[qr]]--;
        qr--;
    }
    while (qr < r)
    {
        //cout << a[qr] << endl;
        qr++;
        b[a[qr]]++;
        sum += delta[b[a[qr]]];
    }

    while (ql < l)
    {
        //cout << ql <<" "<< b[a[ql]] << endl;
        //cout << a[ql] << endl;
        sum -= delta[b[a[ql]]];
        b[a[ql]]--;
        ql++;
    }
    while (ql > l)
    {
        //cout << a[ql] << endl;
        ql--;
        b[a[ql]]++;
        sum += delta[b[a[ql]]];
    }
}

void dfs(int L,int R,int l,int r,int k)
{
    if (L > R) return;

    int mid = (L + R) >> 1;
    int ed = min(mid,r+1);

    int p = 0;

    for (int i = ed;i >= l;i--)
    {
        query(i,mid);

        //cout << i << " " << mid << " " << sum << endl;
        //cout << i << " " << ed << " " << sum << endl;
        if (f[k-1][i-1] + sum < f[k][mid])
        {
            f[k][mid] = f[k-1][i-1] + sum;
            p = i-1;
        }
    }

    dfs(L,mid-1,l,p,k);
    dfs(mid+1,R,p,r,k);
}

int main()
{
    ios::sync_with_stdio(false);

    cin >> n >> k;

    for (ll i = 1;i <= n;i++)
    {
        cin >> a[i];
        //cout << a[i] << endl;
    }

    c[1][1] = 1;
    c[2][1] = 2;
    c[2][2] = 1;

    for (ll i = 3;i <= n;i++)
    {
        c[i][1] = i;
        c[i][2] = c[i-1][2] + c[i-1][1];
        //cout << c[i][2] << endl;
    }

    for (ll i = 1;i <= n;i++)
    {
        delta[i] = c[i][2] - c[i-1][2];
    }

    memset(f,0x3f,sizeof f);

    f[0][0] = 0;

    for (ll i = 1;i <= k;i++)
    {
        memset(b,0,sizeof b);
        ql = 1;
        qr = 1;
        b[a[1]]++;
        sum = 0;
        dfs(1,n,1,n,i);
    }

    cout << f[k][n] << endl;

    return 0;
}
