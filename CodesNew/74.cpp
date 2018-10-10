#include <bits/stdc++.h>

using namespace std;

typedef long long ll; 
#define in freopen("A.in","r",stdin);
#define out freopen("A.out","w",stdout); 

ll L[1005]; 

int main()
{
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    in; out; 
#endif

    ll n,e; 
    cin >> n >> e; 
    for(int i=0;i<n;i++)
    {
        cin >> L[i] ;
    }
    sort(L, L+n); 
    double maxx = 0 ; 
    if(L[0]!=0 ) maxx = L[0]; 
    if(L[n-1]!=e && (e-L[n-1]) > maxx) maxx = e- L[n-1]; 
    for(int i=1;i<n;i++)
    {
        if((((double)(L[i] - L[i-1])/2))> maxx  ) maxx = ((double)(L[i] - L[i-1])/2); 
    }
    printf("%.9f\n", maxx);
    return 0 ;
}