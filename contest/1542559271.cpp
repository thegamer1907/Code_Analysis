#include<bits/stdc++.h>
using namespace std;
int a[100005];
int b[20];
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        int x;
        for(int j=0;j<k;j++)
        {
            scanf("%d",&x);
            if(x)
            a[i]|=(1<<(j));
        }
    }
    for(int i=0;i<n;i++)
        b[a[i]]=1;
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            if(b[i]&b[j]&!(i&j))
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;

}
