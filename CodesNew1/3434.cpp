#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0,x,maxx=0;
    cin>>n>>m;
    for (int i=0 ;i<n ;i++) {
        cin>>x;
        sum+=x;
        maxx=max(maxx,x);
    }
    cout<<max(maxx,((sum+m-1)/n+1))<<" "<<maxx+m<<endl;
    return 0;
}
