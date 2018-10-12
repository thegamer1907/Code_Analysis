#include<bits/stdc++.h>

using namespace std;

int a[500005];

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)cin>>a[i];
    int l=0,r=t/2,ans=0;
    sort(a,a+t);
    int flag=0;
    while(l<t/2)
	{
        while(a[r]<2*a[l]&&r<t)r++;
        if(a[r]>=a[l]*2)ans++,r++;
        l++;
    }
    cout<<t-ans<<endl;
}