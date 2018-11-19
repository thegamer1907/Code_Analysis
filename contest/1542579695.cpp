#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int a[100100][4];
int tong[16];
int n,k;

int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        memset(tong,0,sizeof(tong));
        for(int i=0;i<n;i++)
        {
            int temp=0;
            for(int j=0;j<k;j++)
            {
                scanf("%d",&a[i][j]);
                if(a[i][j]) temp+=(1<<j);
            }
            tong[temp]++;
        }
        if(tong[0]) {cout<<"YES"<<endl;continue;}
        else
        {
            bool ok=false;
            for(int i=0;i<16;i++)
                for(int j=0;j<16;j++)
                    if(i!=j)
                    {
                        if(tong[i] && tong[j] && (i&j)==0) ok=true;
                    }
            if(ok)  cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
