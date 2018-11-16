#include <bits/stdc++.h>
using namespace std;

long long n, t, arr[30002], r;

int main(){
    cin >> n >> t;
    for(long long i=0 ; i<n-1; i++)
        cin >> arr[i];
    while(r<t-1)
        r += arr[r];


    printf("%s\n", r==t-1 ? "YES" : "NO");
    return 0;
}