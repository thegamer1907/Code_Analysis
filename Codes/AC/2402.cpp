#include <iostream>

using namespace std;
int di[10000003];
int pref[10000002];
int a[1000002];
void sieve(int n)
{
    int i,j;
    for(i=2;i*i<=n;i++)
    {
        for(j=i*i;j<=n;j+=i)
        {
            if(di[j]==0)
                di[j]=i;
        }
    }
    for(i=1;i<=n;i++)
        if(di[i]==0)
            di[i]=i;
}
void precom(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        int d = di[a[i]];
        while(a[i]!=1)
        {
            pref[d]++;
            while(a[i]%d==0)
                a[i]/=d;
            d=di[a[i]];
        }
    }
    for(i=1;i<=10000000;i++)
        pref[i]+=pref[i-1];

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
        cin>>a[i];
        sieve(10000000);
        precom(n);
    int m;
    cin>>m;
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        int ans = pref[min(r,10000000)]-pref[min(l-1,10000000)];
        cout<<ans<<"\n";
    }
    return 0;
}
