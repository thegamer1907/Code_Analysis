#include<iostream>
#include<vector>
#include<math.h>
#include<stdio.h>
#include<map>
#define intt long long
using namespace std;
const int MX=2e5+1;
const int INF=1e9+7;
int p[MX];
int cnt[MX];
int n,m,k,is_ans,ok,res;
int cnt_bit(int num)
{
    int cnt=0;
    for(int i=0;i<=5;i++)
    {
        if((num&(1<<i))) cnt++;
    }
    return cnt;
}
void go(int num , int nt_bit , int all_problems)
{
    if(nt_bit<=15)
    {
        int temp=num|(1<<nt_bit);
        go(num,nt_bit+1,all_problems);
        if(cnt[temp])
        {
            go(temp,nt_bit+1,all_problems+1);
        }
    }
    else if(all_problems)
    {
        int temp[5];
        for(int j=0;j<=4;j++)
        {
            temp[j]=0;
        }
        int ok=-1e9;
        for(int i=0;i<=16;i++)
        {
            if((num&(1<<i)))
            {
                ok=0;
                int selected=i+1;
                for(int j=0;j<4;j++)
                {
                    if((selected&(1<<j)))
                    {
                        temp[j]++;
                    }
                }
            }
        }
        for(int i=0;i<k;i++)
        {
            if((temp[i]<=all_problems/2 and all_problems!=1) or (all_problems==1 and temp[i]==0))
            {
                ok++;
            }
        }
        if(ok==k)
        {
            is_ans=1;
        }
    }
}
main()
{
    p[0]=1;
    p[1]=2;
    p[2]=4;
    p[3]=8;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int q=k-1;
        int number=0,a;
        for(int j=1;j<=k;j++)
        {
            cin>>a;
            number+=a*p[q];
            q--;
        }
        cnt[number]++;
    }
    if(cnt[0])
    {
        cout<<"YES";
        return 0;
    }

    for(int i=1;i<=15;i++)
    {
        for(int j=1;j<=15;j++)
        {
            if(cnt[i] and cnt[j] and ((i&j)==0))
            {
                cout<<"YES";
                return 0;
            }
        }
    }
//    go(0,0,0);
    if(is_ans)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}
