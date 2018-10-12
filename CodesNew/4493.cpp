#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1<<20];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int l=0,h=n/2;
    while(l<=h)
    {
        int mid=(l+h)/2;bool o=true;
        for(int a1=0,b=n-mid;a1<mid;++a1,++b)
        {
            if(2*a[a1]>a[b])
            o=false;
        }
        if(o)
        l=mid+1;
        else
        h=mid-1;
    }
    cout<<n-l+1<<endl;
    return 0;
}