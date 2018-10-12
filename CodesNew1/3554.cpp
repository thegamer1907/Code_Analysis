#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,m,i,max;
    float p;
    cin>>n>>m;
    int sum=m;
    int ara[n];
    for (i=0; i<n; i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    max=ara[n-1];
    for (i=0;i<n;i++){
        sum+=ara[i];
    }
    p=ceil(1.0*sum/n);
    if (p<max) p=max;
    cout<<p<<" "<<max+m;
}
