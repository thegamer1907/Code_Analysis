#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,n,m,k,cnt=0,sum=0,c=0,ck;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
     cin>>m;
    ll b[m];
    for(j=0;j<m;j++)
    {
        cin>>b[j];
    }
    sort(b,b+m);
    ck=-1;
    for(i=0;i<n;i++)
    {
        c=0;
       for(j=0;j<m;j++){
        if(b[j]>=0){
            ll dif=abs(a[i]-b[j]);
            if(dif<=1){
                cnt++;
                b[j]=ck;
                c=1;
                break;
            }
        }
        if(c==1)break;
       }
    }
    cout<<cnt<<endl;
    return 0;
}

