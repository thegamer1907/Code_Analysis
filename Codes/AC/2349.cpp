#include <bits/stdc++.h>
#define fio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MOD 1000000007
using namespace std;
long long int a[10000001],sum[10000001],cum[10000001];
bool b[10000001];
vector<int> primes;
void seive()
{
    for(int i=2;i<=10000000;i++)
    {
        if(b[i]==true)
        {
            primes.push_back(i);
            sum[i]+=a[i];
            for(int j=2*i;j<=10000000;j+=i)
            {
                sum[i]+=a[j];
                b[j]=false;
            }
        }
    }
    for(int i=2;i<=10000000;i++)
        cum[i]=cum[i-1]+sum[i];
}
int main()
{
    fio();
    int n,x;
    cin>>n;
    memset(a,0,sizeof(a));
    memset(sum,0,sizeof(sum));
    memset(cum,0,sizeof(cum));
    memset(b,true,sizeof(b));
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    seive();
    int m;
    cin>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        cout<<cum[min(y,10000000)]-cum[min(x-1,10000000)]<<endl;
    }
}