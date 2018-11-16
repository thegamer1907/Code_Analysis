#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int n,t,a[100000],c=1;
    cin>>n>>t;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(c==t)
        return cout<<"YES",0;
        if(i==c){
           c+=a[i];
        }
        
    }
    cout<<"NO";
    return 0;
}