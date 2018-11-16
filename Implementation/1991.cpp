#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    long int x,x1=0,y1=0,z1=0,y,z,n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x>>y>>z;
        x1+=x;
        y1+=y;
        z1+=z;
    }
    if ((x1==0)&&(y1==0)&&(z1==0))cout<<"YES";
    else cout<<"NO";
    return 0;
    }
