#include <bits/stdc++.h>
#define FOR(i, a, b) for (int  i = (a); i <= (b); ++i)
#define FORD(i, a, b) for (int  i = (a); i >= (b); --i)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define maxc 1000000007
#define maxn 500005
#define maxm 1000005
#define pii pair <int,int>
#define pi 3.14159265358979
#define Task ""
using namespace std;
int n;
long long a[maxn];
bool check(int x)
{
    int sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum == 10;
}
void prepare()
{
    int dem = 0;
    FOR(i,1,maxc)
        if (dem == 10000) break;
        else if (check(i)) a[++dem] = i;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    //freopen(Task".inp", "r",stdin);
    //freopen(Task".out", "w",stdout);
    prepare();
    cin >> n;
    cout << a[n];
}
