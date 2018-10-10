#include<iostream>
#include<iomanip>
#include<algorithm>
#define DN 5005
#define x first
#define y second
using namespace std;
long long k,dp[15][DN],l,f,st,g,dp2[15][DN],s;
int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    cin>>k;
    dp[0][0]=dp2[0][0]=1;
    for(int i=1;i<DN;i++)
    {
        for(int j=0;j<=10;j++)
            for(int h=0;h<10;h++)
            {
                if(j+h>10)
                    break;
                if(j+h==0)
                    continue;
                dp[j+h][i]+=dp[j][i-1];
            }
        for(int j=0;j<=10;j++)
            for(int h=0;h<10;h++)
            {
                if(j+h>10)
                    break;
                dp2[j+h][i]+=dp2[j][i-1];
            }
        l=i;
        s+=dp[10][i];
        if(s>=k)
            break;
    }
    f=l;
    g=10;
    for(int i=1;i<l;i++)
        k-=dp[10][i];
    for(int h=1;h<=l;h++)
    {
        st=0;
        if(h==1)
            st=1;
        for(int i=st;i<=min(9LL,g);i++)
            if(dp2[g-i][f-1]>=k)
            {
                g-=i;
                cout<<i;
                break;
            }
            else
                k-=dp2[g-i][f-1];
        f--;
    }
}
