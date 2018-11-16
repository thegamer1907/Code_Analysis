#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[1000];
    int x=0;
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){if(a[i]>0){if(a[i]>=a[k-1]){x++;}}}
    cout<<x;
}
