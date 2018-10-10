#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);

    int n ;
    long long s ;
    cin >> n >> s ;

    long long arr[n] ;
    for(int i = 0  ; i < n ; i ++)
    {
        cin >> arr[i];
    }



    long long l = 0 , h = n , mid ;

    long long mx = 0 ;
    long long ans = 0 ;

    while(l<=h)
    {
        long long temp[n] ;
        mid = (l+h)/2;
        long long sum = 0 ;


        for(int i  = 0 ; i < n ; i++)
        {
            temp[i] = arr[i] + (i+1)*mid;
        }

        sort(temp , temp+n);

        for(int i = 0 ; i < mid ; i ++)
        {
            sum += temp[i];
        }

        if(sum > s)
        {
            h = mid - 1;
        }
        else
        {
            ans = mid ;
            mx = sum ;
            l = mid +1  ;
        }

    }

    cout << ans << " " << mx ;


    return 0 ;
}
