#include <bits/stdc++.h>
using namespace std;
bool check[1000005]= {0};
vector<long long> primes;
void Fun()
{
    check[1]=1;
    for(int i=2; i<=1000000; i++)
    {
        if(check[i]==0)
            for(int j=i*2; j<=1000000; j+=i)
                check[j]=1;
    }
    for(int i=2; i<=1000000; i++)
        if(!check[i])
            primes.push_back(i);
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],ans=n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",ar+i);
    }
    sort(ar,ar+n);
    int mid=n/2,index=mid;
    for(int i=0;i<index;i++)
    {
        while(1)
        {
            if(ar[i]*2<=ar[mid])
            {
                mid++;
                ans--;
                break;
            }
            else
                mid++;
            if(mid==n)
                break;
        }
        if(mid==n)
            break;
    }
    printf("%d",ans);
    return 0;
}
