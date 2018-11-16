#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    if(n&1){
        n-=3;
        cout<<n/2+1<<endl;
        while(n) cout<<2<<' ',n-=2;
        cout<<3<<endl;
    }
    else{
        cout<<n/2<<endl;
        while(n) cout<<2<<' ',n-=2;
    }
}