#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,arr[1005],mx1=0,sum=0,mxx=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {

        cin>>a;
        mx1=max(mx1,a+m);
        mxx=max(mxx,a);
        //cout<<a+m<<"dekhi"<<endl;
        sum+=a;
      //  v.push_back(a);
    }

    sum+=m;
    int ans=sum/n;
   // cout<<sum<<" ss "<<ans<<endl;
    if(sum%n!=0)++ans;

    int y=max(ans,mxx);


    cout<<y<<" "<<mx1<<endl;


}
