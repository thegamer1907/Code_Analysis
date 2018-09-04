#include<bits/stdc++.h>
using namespace std;
int spf[(int)1e7+5];
int sieve[(int)1e7+5];
long long ans[(int)1e7+3];
int last=-1;
vector<int>primes;
void primefact(int n )
{
    while(n!=1)
    {
        if (spf[n]!=last)
        ans[spf[n]]++;

        last=spf[n];
        n=n/spf[n];
    }
}
int main ()
{
    for(int i =0 ; i<1e7+5 ; i++)
        spf[i]=i;
    sieve[1]=-1;
    for(int i =2 ; i*i<1e7+2 ; i++)
    {
        if (sieve[i]==-1)continue;
        for(int j=i*i ; j<1e7+2 ; j+=i)
        {
            sieve[j]=-1;
            if (spf[j]==j)spf[j]=i;
        }
    }
    int n;
    cin>>n;
    for(int i =0 ; i<n ; i++)
    {
        int x;
        scanf("%d",&x);
        last=-1;
        primefact(x);
       // cout<<ans[5]<<endl;

    }
    for(int i =1 ; i<1e7+3 ; i++)
    {
        ans[i]+=ans[i-1];
    }
    int t ;
    cin>>t;
   // cout<<ans[2]<<endl;
   ///no way
    while(t--)
    {
        int x,y;
        scanf("%d",&x);
        scanf("%d",&y);
        y=min(y,(int)1e7);
        x=min(x,(int)1e7);
        printf("%lld\n",ans[y]-ans[x-1]);
    }





    return 0;
}

