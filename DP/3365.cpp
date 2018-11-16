#include<bits/stdc++.h>
using namespace std;
const int maxn=1000005;
char s[maxn];
int f[maxn];
int vis[maxn];
int N;
void getfail(char *s)
{
    f[0]=-1;
    f[1]=0;
    for(int i=1;i<N;i++)
    {
        int j=f[i];
        while(j!=-1&&s[i]!=s[j])
            j=f[j];
        f[i+1]=s[i]==s[j]?j+1:0;
    }
    for(int i=1;i<N;i++)
    {
        vis[f[i]]=1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    scanf("%s",s);
        N=strlen(s);
        getfail(s);
        bool flag=false;
        while(f[N]>0)
        {
            if(vis[f[N]]==1)
            {
                flag=true;
        for(int j=0;j<f[N];j++)
        printf("%c",s[j]);
        printf("\n");
                break;
            }
            else
            {
                N=f[N];
            }
        }
        if(!flag)
        {
            printf("Just a legend\n");
        }
    return 0;
}
