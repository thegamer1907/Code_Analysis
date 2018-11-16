#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,t,i,k=0,s=1,x,v[50000],j=1;
    //vector<int>v;
    //v[0]=0;
    cin>>n>>t;
    for(i=1;i<n;i++)
    {
        cin>>v[i];
       // v.push_back(x);
    }
   /*for(i=0;i<n-1;i++)
        cout<<v[i]<<endl;*/
        //s=v[1];
    while(j<=n){
 s=s+v[j];
 j=s;
        if(t<=s){
            //k=1;
            break;
        }

    }
    //cout<<s<<endl;
    if(t==s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
