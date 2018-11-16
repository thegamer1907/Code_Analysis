#include <bits/stdc++.h>
using namespace std;

bool used[3 * 10005];
int a[3 * 10005];
void dfs( int v )
{
    used[v] = 1;

    if( a[v] )
    dfs( v + a[v]);
    else
    return;
}

int main()
{
    int n , k;

    cin >> n >> k;


    for(int i = 1; i <= n-1; i++)
    {
     cin >> a[i];
    }

    dfs(1);

    if( used[k] )cout << "YES";
    else   cout << "NO";

}
