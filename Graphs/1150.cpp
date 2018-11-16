#include <iostream>

using namespace std;

int main()
{
    int n,t,a,p=1;
    cin>>n>>t;
    for(int i=0;i<n-1;i++){
        cin>>a;
        if(p<t){
            if(p==i+1)p+=a;
        }
    }
    if(p==t)cout<<"YES";
    else cout<<"NO";
    return 0;
}
