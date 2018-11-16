#include <iostream>
using namespace std;
int main(){
    long long n,t;
    cin>>n>>t;
    long long room[n];
    for(long long i=0; i<n-1; i++){
        cin>>room[i];
    }
    for(long long i=0; i<n-1;){
        i+=room[i];
        if(i==t-1){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}