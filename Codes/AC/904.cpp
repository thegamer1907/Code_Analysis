#include<bits/stdc++.h>
using namespace std;
char s[100005];
queue<int>q;
int main()
{
    int n,k;
    while(~scanf("%d%d",&n,&k))
    {
        while(!q.empty())
            q.pop();
        scanf("%s",s);
        int len=0,maxn=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='a')
                q.push(s[i]);
            else if(len<k)
            {
                len++;
                q.push(s[i]);
            }
            else
            {
                maxn=max(maxn,(int)q.size());
                while(!q.empty()&&q.front()=='a')
                    q.pop();
                if(!q.empty())
                {
                    q.pop();
                    q.push(s[i]);
                }
            }
        }
        maxn=max(maxn,(int)q.size());
        len=0;
        while(!q.empty())
            q.pop();
          for(int i=0; i<n; i++)
        {
            if(s[i]=='b')
                q.push(s[i]);
            else if(len<k)
            {
                len++;
                q.push(s[i]);
            }
            else
            {
                maxn=max(maxn,(int)q.size());
                while(!q.empty()&&q.front()=='b')
                    q.pop();
                if(!q.empty())
                {
                    q.pop();
                    q.push(s[i]);
                }
            }
        }
        maxn=max(maxn,(int)q.size());
       printf("%d\n",maxn);
    }
}
