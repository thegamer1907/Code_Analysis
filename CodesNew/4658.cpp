// -> limitless <- //
#include<iostream>
#include<bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define PB push_back
#define MP make_pair
#define f(i, x, n) for (int i = x; i < (int)(n); ++i)
using namespace std;
typedef long long ll;
    const int N = 1e6+ 2;

int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    int arr[N] = {};
    f(i, 0, n){scanf("%d", &arr[i]);}
    sort(arr, arr+n);
    int j = n-1;
    for(int i = n/2-1; i >= 0; i--){
        if( (arr[i]*2) <= arr[j]){ans++; j--;}
    }
    printf("%d", (n-ans) );
    return 0;
}

