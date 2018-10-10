#include<bits/stdc++.h>
using namespace std;

    long long int b[10000001]={0};
long long int dp[10000001]={0};
    bool mark[10000001];
int main()
{
    long long int n;
    scanf("%Ld",&n);
    long long int a[n];
    long long int max1=0;
    for(int i=0;i<n;i++)
    {
        scanf("%Ld",&a[i]);
        b[a[i]]++;
        max1=max(max1,a[i]);
    }
     
    memset(mark,false,sizeof(mark));
    for(int i=2;i<=max1;i++)
    {
        if(mark[i]==false)
        {
            for(int j=i;j<=max1;j+=i)
            {
                dp[i]+=b[j];
                mark[j]=true;
            }
           
        }
    }
    for(int i=1;i<=max1;i++)
    {
        dp[i]=dp[i]+dp[i-1];
    }
    int m;
    scanf("%d",&m);
    int l,r;
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&l,&r);
        if(l>max1 && r>max1)
        {
            printf("0");
        }
        else if(r>max1)
        {
          cout<<dp[max1]-dp[l-1];
        }
        else
        {
           cout<<dp[r]-dp[l-1];
        }
        printf("\n");
    }
                
    return 0;
}