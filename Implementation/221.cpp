#include <bits/stdc++.h>

using namespace std;

const int MOD = 1000000007;

#define fr first
#define sc second
#define mp make_pair

int p[15];
int n, a, b;

int rec( int step, int n1, int n2){
    int c1 = n1 / p[step];
    if ( n1%p[step] )
        c1++;
    int c2 = n2 / p[step];
    if ( n2%p[step] )
        c2++;
    if ( c1%2 && c1 + 1 == c2 )
        return step + 1;
    if ( c1%2 == 0 && c1 - 1 == c2 )
        return step + 1;
    return rec( step + 1, a, b);
}

int main()
{
    ios_base :: sync_with_stdio( false ); cin.tie( NULL );
    cin >> n >> a >> b;
    if ( a > b )
        swap(a, b);
    p[0] = 1;
    for (int i = 1; i < 10; i++)
        p[i] = p[i- 1] * 2;
    int k;
    for (int i = 0; i < 10; i++)
        if ( p[i] ==  n ){
            k = i;
            break;
        }
    int ans = rec( 0, a, b);
    if ( ans == k )
        cout << "Final!";
    else
        cout << ans;
    return 0;
}
