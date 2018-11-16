#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, t, i, pos=1;
    cin>>n>>t;
    int arr[n-1];
    for(i=0;i<n-1;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;){
        pos += arr[i];
        if(pos == t){
            cout<<"YES"<<endl;
            return 0;
        }
        i+= arr[i];
    }
    cout<<"NO"<<endl;
}
