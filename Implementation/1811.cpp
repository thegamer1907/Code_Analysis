#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z,m=0,n=0,o=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&x,&y,&z);
        m+=x;//cout<<m<<endl;
        n+=y;//cout<<n<<endl;
        o+=z;//cout<<o<<endl;

    }
    if(m==0 && n==0 && o==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
