#include"bits/stdc++.h"
using namespace std;
 bool vis[100009]={false};

int main()
{
    int n,m;
    cin>>n;
    int a[n+5];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    int b[m+5];

    for(int i=1;i<=m;i++)
        cin>>b[i];
         sort(a+1,a+n+1);
    sort(b+1,b+m+1);
        int c=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i]==b[j]&&vis[j]==false)
                {
                    c++;
                    vis[j]=true;
                    break;
                }
                else if(a[i]==(b[j]-1)&&vis[j]==false){
                    c++;
                    vis[j]=true;
                    break;
                }
                else if(a[i]==(b[j]+1)&&vis[j]==false)
                {
                    c++;
                    vis[j]=true;
                    break;
                }
            }
        }
            cout<<c<<endl;
            return 0;
        }
        //4 1 4 6 2 5 5 1 5 7 9



