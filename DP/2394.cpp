#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 ;

int arr2[N] , arr[N] ;

int main()
{
    int n , k ;
    cin>>n>>k ;
    for(int i = 1 ; i <= n ; ++i)
        cin>>arr[i] ;
    for(int i = 1 ; i <= n ; ++i)
        arr2[i] = arr2[i-1] + arr[i] ;
    int MIN = 1e9 , ans = 1 ;
    for(int i = 1 ; i <= n ; ++i)
    {
        if(i+k-1 > n)
            break;
        int x = arr2[i+k-1] - arr2[i-1] ;
        if(x < MIN)
            MIN = x , ans = i ;
    }
    cout<<ans;
    return 0 ;
}
