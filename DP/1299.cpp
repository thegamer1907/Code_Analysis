#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n+1), pre(n+1,0);
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        pre[i]=a[i]+pre[i-1];

    int mx=-1;
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
    {
        int temp=pre[i-1]+(j-i+1)-(pre[j]-pre[i-1])+pre[n]-pre[j];
        if(temp>mx){
            mx=temp;
        }
    }
    cout<<mx;
}
