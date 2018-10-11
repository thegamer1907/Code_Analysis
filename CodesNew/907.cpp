#include <bits/stdc++.h>
#define MAX 3000

using namespace std;

int n,m,Match;
string arr[MAX*2];

int main()
{
    cin>>n>>m;
    for(int i=0;i<n+m;i++)
        cin>>arr[i];
    sort(arr,arr+m+n);
    for(int i=1;i<n+m;i++)
        Match+=(arr[i]==arr[i-1]);
    n-=Match,m-=Match;
    if(n==m)
        return puts((Match&1)? "YES" : "NO"),0;
    puts((n>m)? "YES" : "NO"),0;
}
