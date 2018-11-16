// Example program
#include <iostream>
using namespace std;
int main()
{   int n,k,z=0,d=0;
    cin>>n>>k;
    int t[n];
    for(int i=0;i<n;i++){
        cin>>t[i];
        if(i>=k-1 && t[i]==t[k-1])
        z=i;
    }
    for(int i=0;i<=z;i++){
        if (t[i]>0)
        d++;
    }
    cout<<d;
    return 0;
}