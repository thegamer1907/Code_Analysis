#include<bits/stdc++.h>
using namespace std;
int n,indx;
int ara[500010];
bool found(int f)
{
  /*  int l=n/2,h=n,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(ara[mid]>=f) return 1;
        else l=mid+1;
    }
    return false;
    */

    for(int i=indx;i<n;i++) if(f<=ara[i]) {
            indx=i;
            return true;
    }
    return false;
}
int main()
{
    ///freopen("in.txt","r",stdin);
   /// freopen("out.txt","w",stdout);
    int cnt;
    cin>>n;
    cnt=n;
    indx=n/2;
    for(int i=0;i<n;i++) cin>>ara[i];
    sort(ara,ara+n);
    for(int i=n/2,j=0;i<n;i++){
        if(j<n/2 && ara[j]*2<=ara[i]) cnt--,j++;
    }
   /* for(int i=0;i<n/2;i++){
        if(found(ara[i]*2)) cnt--;
    }
    */
    cout<<cnt<<endl;
}
