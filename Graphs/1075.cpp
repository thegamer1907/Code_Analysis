#include <iostream>

using namespace std;

int main()
{
    int n,m,c=1,flag=0;
    cin>>n>>m;
    int a[n-1];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    if(m!=1){
        while(c<n){
            c=a[c-1]+c;
            if(c==m){
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"YES";
    return 0;
}
