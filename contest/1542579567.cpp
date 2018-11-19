#include <bits/stdc++.h>
#define ll long long
#define fr first
#define sc second
#define ii pair<int,int>
#define mp make_pair
#define All(v) v.begin(),v.end()
using namespace std;
int maskR[100];
int n,k;
int solve(int mask , int last , int k1,int k2,int k3,int k4)
{
    if(mask == (1<<k))
    {
        if(last==0)
            return 0;
         if(last%2  == 0)
        {
            return (k1<=last/2&&k2<=last/2&&k3<=last/2 && k4<=last/2);
        }
        else
            return (k1< last/2&&k2<last/2&&k3<last/2 && k4<last/2);
    }
    int sum2 = 0 ,kk[4] = {k1,k2,k3,k4};
    for(int j=0;j<k;j++)
    {
        if((1<<j)&mask)
        {
            kk[j]++;
        }
    }

    if(maskR[mask] > 0)
        sum2 = solve(mask+1,last+1,kk[0],kk[1],kk[2],kk[3]);
    return max(sum2 , solve(mask+1,last,k1,k2,k3,k4));
}
int main()
{
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        int temp = 0;
        for(int j=0; j<k; j++)
        {
            int x;
            scanf("%d",&x);
            if(x)
                temp+=(1<<j);
        }
        maskR[temp]++;
    }
    if(maskR[0] > 0)
    {
        cout<<"YES";
    }
    else
    {
        if(k == 1)
        {
            cout<<"NO";
        }
        else if(k == 2)
        {
            if(maskR[1] > 0 && maskR[2] > 0)
            {
                cout<<"YES";
            }
            else
                cout<<"NO";
        }
        else
        {
            int ans = 0;

            ans = solve(0,0,0,0,0,0);

            if(ans == 1)
                cout<<"YES";
            else
            cout<<"NO";
        }
    }
}
