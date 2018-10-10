#include <bits/stdc++.h>
#include <bitset>
#define ll long long
#define pb push_back
#define f first
#define s second
#define mod 1000000007
#define hurry ios::sync_with_stdio(false)
#define PI 3.141592654
#define xx (int) 2e5+7
//1715
using namespace std;

int N,a[xx],ans=2e9,idx;

int main()
{
    hurry;
    cin>>N;
    for(int i=0;i<N;i++) cin>>a[i];
    for(int i=0;i<N;i++)
    {
        a[i]-=i;
        a[i]=max(0,a[i]);
        int t=a[i]/N+(a[i]%N!=0);
        int steps=t*N+i;
        if(steps < ans) ans=steps , idx=i+1;
    }
    cout<<idx;
    return 0;
}
/*

*/
