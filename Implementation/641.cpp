#include<bits/stdc++.h>
using namespace std;
int n,k,score,Count;
int main()
{ score=0,Count=0;
cin>>n>>k;
int a[n];
for(int i=1;i<=n;i++)
    {cin>>a[i];
    score=a[k];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=score&&a[i]!=0)
            Count++;
        else
            continue;
    }
    cout<<Count<<"\n";
return 0;
}
