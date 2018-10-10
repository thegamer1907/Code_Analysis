#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=1e6+10;
bool vis[N];
char s[N];
int n,len;
int nex[N];
void Next()
{
    int i=-1,j=0;
    nex[0]=-1;
    while(j<n)
    {
        if(i==-1||s[i]==s[j])
        {
            i++;
            j++;
            nex[j]=i;
        }
        else
            i=nex[i];
    }
 //   for(int i=0; i<=n; i++)
   //     cout<<nex[i]<<" ";
}
int main()
{
    bool flag;
  //  ios::sync_with_stdio(false);
    while(cin>>s)
    {
        flag=0;
        n=strlen(s);
        if(n<3)
        {
            printf("Just a legend\n");
        }
        else
        {
            Next();
            len=nex[n];
            // cout<<"len= "<<endl;
            if(len==n-1)
            {
                //cout<<"123   "<<endl;
                len--;
                for(int i=0; i<len; i++)
                    cout<<s[i];
                cout<<endl;
            }
            else
            {
                for(int i=0; i<n; i++)
                    vis[nex[i]]=1;
                vis[0]=0;
                for(int i=n; i; i=nex[i])
                {
                 //   cout<<nex[i]<<endl;
                    if(vis[nex[i]])
                    {
                        for(int j=0; j<nex[i]; j++)
                            cout<<s[j];
                        cout<<endl;
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                     printf("Just a legend\n");
            }
        }
    }
    return 0;
}