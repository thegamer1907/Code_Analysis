#include<bits/stdc++.h>
using namespace std;
int sum(int x)
{
    int ans=0;
    while(x!=0)
    {
        ans+=x%10;
        x=x/10;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    int n,i,k=1;
    //cout<<sum(123);
    cin>>n;
    for(i=1;i<=11000007;i++)
    {
        if(sum(i)==10)
        {
            if(k==n)
            {
                cout<<i;
                return 0;
            }
            //cout<<k<<endl;
            i+=8;
            k++;
        }
    }
}