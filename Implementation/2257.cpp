#include <iostream>
using namespace std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;
    cout<<max(0,(1+w)*w/2*k-n);
}