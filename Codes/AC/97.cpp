#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);

    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> arr[i] ;
        if(i) arr[i] += arr[i-1];
    }

    long long counter = 0  , ans = 0;
    for(int i = 0 ; i < n - 1 ; i++)
    {
        if(arr[i] == (arr[n-1]/3)*2)
            ans += counter;
        if(arr[i] == arr[n-1] / 3)
            counter++;
    }

    if(arr[n-1] % 3)
        cout << 0;
    else cout << ans;

    return 0;
}
