#include <bits/stdc++.h>
#define MAX (105)
using namespace std;

int a[MAX],b[MAX];
int visi[MAX],visj[MAX];
int n,m,cnt,num;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+m);
    if(n<m)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(abs(a[i]-b[j])<=1&&visj[j]!=1&&visi[i]!=1)
                {
                    cnt++;
                    visj[j]=1;
                    visi[i]=1;
                    break;
                }
            }
        }
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(abs(b[i]-a[j])<=1&&visj[j]!=1&&visi[i]!=1)
                {
                    cnt++;
                    visj[j]=1;
                    visi[i]=1;
                    break;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
