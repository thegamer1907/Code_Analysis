#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int n,t,i,p;
    cin>>n>>t;
    int num[n+10];

    for(i=1;i<n;i++) cin>>num[i];

    for(i=1;i<n;){
        p=num[i]+i;
        //cout<<p<<" ";
        if(p==t){
                //cout<<endl;
            cout<<"YES\n";
            return 0;
        }
        i=p;
    }
    cout<<"NO"<<endl;
    return 0;



}

