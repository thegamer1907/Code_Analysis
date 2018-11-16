#include <bits/stdc++.h>
using namespace std;
long long i,j,k,a,n,x,y,s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j>>k>>a;
        x+=j;
        y+=k;s+=a;
    }
    if(!x && !y && !s)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
