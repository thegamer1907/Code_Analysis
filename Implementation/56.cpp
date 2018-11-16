#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    a--;
    b--;
    int ans=0;
    while(a!=b)
    {
        ans++;
        a/=2;
        b/=2;
        
    }
    if((1<<ans)==n)
    cout<<"Final!";
    else cout<<ans;
    return 0;
}