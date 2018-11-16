#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);

    int n , t;
    cin >> n >> t;

    int arr[n];
    for(int i = 0 ; i < n-1 ; i++)
        cin >> arr[i];

    int pos = 1;
    while(pos < t)
        pos = arr[pos-1] + pos;

    if(pos == t) cout << "YES";
    else cout << "NO";

    return 0;
}