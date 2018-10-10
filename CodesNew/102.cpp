#include<bits/stdc++.h>
using namespace std;
int n, l;
int a[100000];
int main()
{
    cin>>n>>l;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    int maxdist = 2 * max(a[0]-0, l-a[n-1]);
    for(int i=0;i<n-1;i++)
    {
        maxdist = max(maxdist, a[i+1]-a[i]);
    }
    printf("%.10f",maxdist/2.);
}