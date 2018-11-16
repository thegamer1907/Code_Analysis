#include<bits/stdc++.h>
using namespace std;
int n,k,a,b,ans,cost;

int main()
{
    cin>>n>>k;
    k=240-k;
    for(int i=1;i<=n;i++)
    {
        cost=5*i;
        if(cost<=k)
        {
            k-=cost;
            ans++;
        }
        else break;

    }
    cout<<ans;



	return 0;
}
