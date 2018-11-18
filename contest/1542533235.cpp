#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 1e5 + 9;
int vec[MAX_N],vis[MAX_N];
int N,M,x;

int main()
{
    int a,b;
    while(cin>>N>>M)
    {
        memset(vis,0,sizeof(vis));
        for(int i=0;i<N;i++)
        {
            int t = 0;
            for(int j=0;j<M;j++)
            {
                int temp;
                scanf("%d",&temp);
                t<<=1;
                t += temp;
            }
            vis[t] = 1;
        }
        bool flag = false;
        for(int i=0;i<16;i++)
        {
            for(int j=i;j<16;j++)
            {
                if(!vis[i] || !vis[j]) continue;
                if((i&j)==0) flag = true;

            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

