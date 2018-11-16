#include <iostream>
using namespace std;

int main() {
    int n,x=0,y=0,z=0,x1,y1,z1;
    cin>>n;
    for (int i=0;i<n;++i){
        cin>>x1>>y1>>z1;
        //cout<<x1<<' '<<y1<<' ' <<z1<<endl;
        x+=x1;
        y+=y1;
        z+=z1;
    }
    //cout<<x<<' '<<y<<' '<<z;
    if (!x && !y && !z){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}