#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int tmp;
    int cnt=0;
    int cnt2=0;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        if(tmp==1)
        {
        a[i]=-1;cnt++;}
        else
        {
        a[i]=1;
        cnt2++;
        }
    }
    if(cnt==n)
    {
        cout<<n-1<<endl;
        return 0;
    }
    else if(cnt2==n)
    {
        cout<<n<<endl;
        return 0;
    }
    int sum2=0;
    int sum=-INT_MAX;
    for(int i=0;i<n;i++)
    {
        sum2+=a[i];
        if(sum2<0)
        sum2=0;
        sum=max(sum,sum2);
    }
    cout<<sum+cnt<<endl;
}