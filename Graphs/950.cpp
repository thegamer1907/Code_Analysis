#include<iostream>
using namespace std;
int main()
{
    int n,i,t;
    cin>>n>>t;
    int ara[n-1];
    for(i=1;i<=(n-1);i++){
        cin>>ara[i];

    }
    int j=1;
    while(j<n){
        j+=ara[j];
        if(j==t){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
