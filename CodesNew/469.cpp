#include<bits/stdc++.h>
using namespace std;

#define  fr(i,a)  for(i=0;i<a;i++)
#define  tc(i,t)  for(i=1;i<=t;i++)
#define  cln(x)   memset(x,0,sizeof(x))
#define  clr(x)   memset(x,-1,sizeof(x))
#define  read()   freopen("input.txt","r",stdin)
#define  write()  freopen("output.txt","w",stdout)
int ara[100010];
main()
{
    int n,t,i;
    while(cin>>n>>t)
    {
        int sum=0,j=0;
        fr(i,n) cin>>ara[i];
        fr(i,n)
        {
            sum+=ara[i];
            if(sum>t) sum-=ara[j++];
        }
        cout<<i-j<<endl;
    }
    return 0;
}
