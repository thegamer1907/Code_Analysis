#include<bits/stdc++.h>

using namespace std;

long long int a[100000];

int main()
{
    long long int n,t,x=-1,i;
    cin>>n>>t;
    for(i=1; i<n; i++){
        cin>>a[i];
    }
    for(i=1; x<=t; ){
        x = i+a[i];
        i = x;
       // cout<<x<<endl;
        if(x==t){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;

}
