#include <bits/stdc++.h>
using namespace std;
int n,m,a[100+5],b[100+5],c;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // freopen("important.in","r",stdin);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>b[i];

    sort(a,a+n),sort(b,b+m);
    for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {

               if(a[i]==b[j])
               {
                   c++;
                   b[j]=-1;
                   break;
               }
               else if(abs(a[i]-b[j])==1)
               {
                   c++;
                   b[j]=-1;
                   break;
               }
           }
       }
       cout<<c<<endl;


    return 0;
}
