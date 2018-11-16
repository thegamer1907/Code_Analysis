#include<bits/stdc++.h>
using namespace std;
 int ar[200000],zero[200000],one[200000];
 int n,m,k,l,j;
int main()
{

    cin>>n;
    int f=0;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        if(ar[i]==1)
        {
        one[i]=1;
        }
        else zero[i]=1;
    }
    for(int i=1;i<=n;i++)
    {
        one[i]+=one[i-1];
        zero[i]+=zero[i-1];
    }
    int mx=-1;
    for(int i=1;i<=n;i++)
    {

        for(j=i;j<=n;j++)
        {
            int rngone=one[j]-one[i-1];
            int rngzero=zero[j]-zero[i-1];
            if(rngzero>rngone)
            {
                int totone=one[i-1]-one[0]+one[n]-one[j];
                totone+=rngzero;
                mx=max(totone,mx);
                f=1;
            }

        }

    }
    if(f==0) mx=n-1;
    cout<<mx<<endl;
}
