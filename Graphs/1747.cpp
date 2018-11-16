#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,t,pos=1,i=0;
    cin>>n>>t;

    long int arr[n-1]={};

    for(long int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    while(pos<n){
        pos+=arr[pos-1];//cout<<pos<<"\n";
        if(pos==t){
            cout<<"YES";return 0;
        }
        i++;
    }
    cout<<"NO";
    return 0;
}
