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
    int cnt=0,maxx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cnt++;
            maxx=max(cnt,maxx);
        }
        else
        {
            cnt--;
            if(cnt<0)
                cnt=0;
        }
    }
    cout<<sat+maxx<<endl;
}

