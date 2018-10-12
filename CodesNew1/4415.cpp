#include<bits/stdc++.h>
using namespace std;
int n;
string arr[500001],ans[500001],buf;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    ans[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        buf="";
        for(int j=0;j<arr[i].length();j++)
        {
            buf+=arr[i][j];
            if(buf>ans[i+1])
                break;
            ans[i]+=arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<endl;
    return 0;
}
