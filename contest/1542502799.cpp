/*
* Allah is Almighty.......
*
* Mehedi Hasan Angkur <thisisangkur@gmail.com>
* CSE 11th Batch,MBSTU
* uva,cf id mbstu_angkur..
*
* keep coding...
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define D double
#define pb push_back
#define mpp make_pair
#define sf scanf
#define pf printf
#define ff first
#define ss second
#define sz 100005
#define sq(x) x*x
#define eps 1e-8
#define PI (2*acos(0.0))
#define mem(a, b) memset(a, b, sizeof a)
#define dist(x1, y1, x2, y2) sqrt(sq(x1-x2)+sq(y1-y2))
#define FastIO ios_base::sync_with_stdio(0)
const int inf = 0x7f7f7f7f;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n, m, x, y, z, k, w;
int tmp;
int A[100050], freq[20];

int main ()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        tmp = 0;
        for(int j=0; j<m; j++)
        {
            tmp *= 2;
            sf("%d", &x);
            tmp += x;
        }
        A[i] = tmp;
        freq[A[i]]++;
    }

    k = (1 << m) - 1;

    if (freq[0] > 0)
    {
        pf("YES\n");
        return 0;
    }

    for(int i=0; i<k; i++)
    {
        for(int j=i+1; j<k; j++)
        {
            if (freq[i] > 0 && freq[j] > 0 && (i & j) == 0)
            {
                pf("YES\n");
                return 0;
            }
        }
    }

    pf("NO\n");
    return 0;
}
