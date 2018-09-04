#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
ll b[3],a[3],p[3];
int main()
{
    char arr[105];
    scanf("%s",arr);
    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]=='B') b[0]++;
        else if(arr[i]=='S') b[1]++;
        else b[2]++;
    }
    for(int i=0;i<3;i++)
        cin>>a[i];
    for(int i=0;i<3;i++)
        cin>>p[i];
    ll R;
    cin>>R;

    ll l=0,r=10000000000000,mid;
    while(r>=l)
    {
        mid=l+((r-l)/2);
        ll temp=R,temp1=R;
        for(int i=0;i<3;i++)
        {
            ll v=mid*b[i];
            if(v>a[i])
                temp-=((v-a[i])*p[i]);
            v=(mid+1)*b[i];
            if(v>a[i])
                temp1-=((v-a[i])*p[i]);
        }
        if(temp>=0&& temp1<0)
            break;
        else if(temp>=0)
            l=mid+1;
        else
            r=mid-1;
    }
    cout<<mid<<endl;
    return 0;
}
