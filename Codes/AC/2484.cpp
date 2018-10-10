
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007
#define pb push_back
#define endl "\n"
const int maxi = 10000007 ;

int arr[1000005] ;
int hasho[maxi] ;
int vis[maxi] ;
int ans[maxi] ;

int32_t main()
{
    ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n ;
    cin >> n ;
    for(int i = 0 ; i < n  ; i ++ )
    {
        cin >> arr[i] ;
        hasho[arr[i]]++ ;
    }
    for(int i = 2 ; i < maxi ; i ++ )
    {
        if(vis[i] == 0 )
        {
            for(int j = i ; j <= maxi ; j += i )
            {
                vis[j] = 1 ;
                ans[i] += hasho[j] ;
            }
        }
    }
    for(int i = 2 ; i <  maxi ; i++ )
        ans[i] += ans[i-1] ;
    int q ;
    cin >> q ;

    while(q-- )
    {
        int a , b ;
        cin >> a >> b ;
        if(a >= maxi )
            a = maxi - 1 ;
        if(b >= maxi )
            b = maxi - 1 ;
        cout << ans[b] - ans[a-1]  << endl  ;
    }
}
