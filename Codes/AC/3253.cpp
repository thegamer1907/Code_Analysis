#include<bits/stdc++.h>
using namespace std;
#define mxn 100005
int main()
{
    int n,a[mxn];
    while(cin>>n)
    {
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++) a[i]-=i,a[i]=ceil(a[i]*1.0/n);
        int mi=1000000000,res=-1;
        for(int i=0;i<n;i++) if(a[i]<mi) mi=a[i],res=i+1;
        cout<<res<<endl;
    }
}
