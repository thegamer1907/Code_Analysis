#include<bits/stdc++.h>
using namespace std;
main()

{
    int n;
    cin>>n;
    int a=0,b=0,c=0;
    int d,e,f;
    for(int i=0;i<n;i++){
        cin>>d>>e>>f;
        a+=d;
        b+=e;
        c+=f;
    }
    if(a==0 && b==0 && c==0){
        cout<<"YES";
    }else
    cout<<"NO";

}
