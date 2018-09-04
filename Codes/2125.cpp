#include<bits/stdc++.h>
using namespace std;
#define lint long long
map<lint,lint>M;
lint s,Al[200005],Ar[200005],A[200005];
main()
{
    lint n,k,i,a;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(!(a%k))
            Al[i]=M[a/k];
        M[a]++;
        Ar[i]=M[a*k];
        A[i]=a;
    }
    for(i=0; i<n; i++)
    {
        Ar[i]=M[A[i]*k]-Ar[i];
        s+=Ar[i]*Al[i];
    }
    cout<<s;
}
