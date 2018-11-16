#include <iostream>
using namespace std;

int main() {
    int n,k,a[101];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {cin>>a[i];
    }
    for(int i=0;i<k;i++){
    if(a[i]==0)
    {cout<<i;
    return 0;
    }}
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1])
        c++;
    }
    cout<<c;
    
	return 0;
}
