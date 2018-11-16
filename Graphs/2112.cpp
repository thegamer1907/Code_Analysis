#include <bits/stdc++.h>
#define fr first
#define sc second
#define mk make_pair

using namespace std;
const int N = (int)1e5 + 7;
int vis[N];
int n , m;
int ans;
void bfs( int n )
{
    vis[n] = 1;
    queue < pair<int,int> >q;
    q.push(mk(n , 0));

    while( !q.empty() )
    {
        pair<int,int> p = q.front();
        q.pop();

        if(p.fr == m)
        {
            ans = p.sc;
            return;
        }

        vis[ p.fr ] = 1;
        if( p.fr * 2 <= m * 2 && vis[p.fr * 2] == 0)
            q.push(mk(p.fr*2 , p.sc + 1));
        if(p.fr - 1 >= 0 && vis[p.fr - 1] == 0)
            q.push(mk(p.fr-1 , p.sc + 1) );
}


}

int main()
{
    cin >> n >> m;
    if( n >= m)
    {
        cout << n - m;
        return 0;
    }
    bfs( n );

    cout << ans;
}
