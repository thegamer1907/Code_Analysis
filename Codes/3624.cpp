#include<bits/stdc++.h>

using namespace std;
long long int sp1[200005],sp2[200005],cs1[200005],cs2[200005];
int main()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,k,x,s,cost,i,j;
    cin>>n>>m>>k;
    cin>>x>>s;
    for(i=1;i<=m;i++)
        cin>>sp1[i];

    for(i=1;i<=m;i++)
        cin>>cs1[i];

        for(i=1;i<=k;i++)
        cin>>sp2[i];

        for(i=1;i<=k;i++)
            cin>>cs2[i];


       cost=x*n;

//cout<<cost<<" cost \n";
       i=1;
            while(cs2[i]<=s&&i<=k)
            {
                int lef=n-sp2[i];
                cost=min(cost,lef*x);
                i++;
            }
       i=1;
  //     cout<<cost<<" cost \n";
              while(cs1[i]<=s&&i<=m)
            {
                cost=min(cost,n*sp1[i]);
                i++;
            }
//cout<<cost<<" cost \n";
       for(i=1;i<=m;i++)
       {
           if(cs1[i]<=s)
           {
int               p=s-cs1[i];
               int pos=lower_bound(cs2+1,cs2+1+k,p+1)-cs2;
  //             cout<<pos<<"\n";
               pos--;
               int lef=n-sp2[pos];
               cost=min(cost,lef*sp1[i]);
           }
       }
       cout<<cost;



    return 0;
}
