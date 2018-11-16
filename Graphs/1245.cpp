#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,t,temp,p=1,stat=0;
    cin>>n>>t;
    int a[n];

    a[0]=0;
    
    for(int i=1;i<n;i++){
        cin>>a[i];
    }

    while(p<t){
        p+=a[p];

        if(p==t){stat=1;}
    }


    if(stat==1){cout<<"YES";  return 0; }

    cout<<"NO";

    return 0;

}