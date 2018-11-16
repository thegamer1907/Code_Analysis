#include <iostream>
using namespace std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;
    int sum=(1+w)*w/2*k-n;
    if (sum>0){
        cout<<sum;
    } else {
        cout<<0;
    }
}