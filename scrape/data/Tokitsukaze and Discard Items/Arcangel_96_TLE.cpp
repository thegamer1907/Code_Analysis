#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll pat = (n%k==0)?n/k:n/k+1;
    vector<ll> A(m,0);
    for(int i=0;i<m;i++)cin>>A[i];
    int ans=0;
    int i=0,j=0;
    int disc = 0;
    long long v = (A[0]%k==0)?A[0]:(A[0]/k + 1)*k;
    while(i<m && j<m)
    {
        if(A[i]-disc<=v)
        {
            ans++;
            j=i;
            int discTmp=0;
            while(A[j]-disc<=v && j<m)
            {
                j++;
                discTmp++;
            }
            disc += discTmp;
            i=j;
        }
        else v+=k;
    }
    cout<<ans<<endl;
    return 0;
}