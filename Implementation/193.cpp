#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define pb push_back
#define pl pop_back
#define f first
#define s second

using namespace std;

ll a , b , e[500000] , f , n , m , l , k , r , s , t , i , j;

pair<ll , ll>c[500000] , d[500000];

int main()
{
    cin>>n>>a>>b;
    for (i = 1 ; i <= n ; i ++)
        e[i] = i;
    while (n > 2)
    {
        m = 0;
        s ++;
        for (i = 1 ; i <= n ; i += 2)
            m ++ , c[m] = {e[i] , e[i + 1]};
        for (i = 1 ; i <= m ; i ++)
        {
            if ((c[i].f == a && c[i].s == b) || (c[i].f == b && c[i].s == a))
            {
                cout<<s;
                return 0;
            }
            if (c[i].f == a)
                e[i] = a;
            else if (c[i].s == a)
                e[i] = a;
            else if (c[i].f == b)
                e[i] = b;
            else if (c[i].s == b)
                e[i] = b;
            else
                e[i] = c[i].f;
        }
        n = m;
    }
    cout<<"Final!";
}
