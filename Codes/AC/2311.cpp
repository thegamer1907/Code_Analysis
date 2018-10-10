#include<bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define mod 1000000007
using namespace std;
int n,k;
#define N 10000001
int A,fix[N];long long sum[N];int R[N];
int main()
{
    ios::sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A;
        R[A]++;
    }

    for(int i=2;i<N;i++)
    {
        if(fix[i]==0)
        {
            sum[i]+=R[i];
            for(int j=i*2;j<N;j+=i)
                fix[j]=1,sum[i]+=R[j];
        }
    }
    for(int i=2;i<N;i++)
    sum[i]+=sum[i-1];
    cin>>k;
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        if(l>=N){cout<<0<<endl;continue;}
        cout<<sum[min(r,N-1)]-sum[l-1]<<endl;
    }
}
