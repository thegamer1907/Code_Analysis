#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int s[200];
int main()
{
    int N,K;
    while(scanf("%d%d",&N,&K)==2)
    {
        memset(s,0,sizeof(s));
        for(int i=1;i<=N;i++)
        {
            int res=0;
            int x;
            for(int j=0;j<K;j++)
            {
                scanf("%d",&x);
                res+=x*(1<<j);
            }
            s[res]=1;
        }
        bool flag=false;
        for(int i=0;i<16;i++)
        {
            for(int j=0;j<16;j++)
                if(s[i]&&s[j])
                {
                    if((i&j)==0)
                        flag=true;
                }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
