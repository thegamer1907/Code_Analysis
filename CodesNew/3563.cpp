#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n,m,a,arr[1005],mx1=0,mainmax=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {

        cin>>a;
        mx1=max(mx1,a+m);
        
        mainmax=max(mainmax,a);
        //cout<<a+m<<"dekhi"<<endl;
        v.push_back(a);
    }

    //cout<<mx1<<endl;

    sort(v.begin(),v.end());
    int y=v[v.size()-1];
    int maxx=0;
    for(int i=0;i<v.size();i++)
    {
        int dif=(mainmax-v[i]);
        
        m-=dif;
        
        if(m<=0) break;
        
    }
    int re=0;
    
    if(m>0)
    {
        if(m%n==0)
        {
            re=m/n;
        }
        else
        
        {
            re=(m/n)+1;
        }
    }
    mainmax+=re;
   
    cout<<mainmax<<" "<<mx1<<endl;


}
