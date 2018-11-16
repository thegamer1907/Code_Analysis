#include <iostream>

using namespace std;
int n,a,s=0,k,b=0,i;

int main()
{
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        s+=a;
        k+=1-a-a;
        if(k<0)k=0;
        if(b<k)b=k;
    }
    if(b==0) cout<<s-1;
    else cout<<s+b;

    return 0;
}
