#include<bits/stdc++.h>
using namespace std;
#define lint long long
map<lint,lint>M;
lint s,Al[200005],Ar[200005],A[200005];
main()
{
    lint n,k,i,a;
    cin>>n>>k;
    if(k!=1)
    {
        for(i=0; i<n; i++)
        {
            cin>>a;
            M[a]++;
            if(!(a%k))
                Al[i]=M[a/k];
            Ar[i]=M[a*k];
            A[i]=a;
        }
        for(i=0; i<n; i++)
        {
            Ar[i]=M[A[i]*k]-Ar[i];
            if(A[i])
                s+=Ar[i]*Al[i];
        }
        s+=(M[0]*(M[0]-1)*(M[0]-2))/6;
        cout<<s;
    }
    else
    {
        vector<int>P;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(!M[a])
                P.push_back(a);
            M[a]++;
        }
        for(i=0;i<P.size();i++)
        {
            a=M[P[i]];
            s+=(a*(a-1)*(a-2))/6;
        }
        cout<<s;
    }
}
