#include<bits/stdc++.h>
using namespace std;
int arr[105];
int main()
{
    int n,sat=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
            sat++;
    }
    int cnt,maxx=-1;
    for(int i=0;i<n;i++)
    {
        cnt=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==0)
            {
                 cnt++;
                 maxx=max(cnt,maxx);
            }
            else
                cnt--;
        }
        //cout<<maxx<<endl;
    }
    //cout<<maxx<<endl;
    cout<<sat+maxx<<endl;
}
