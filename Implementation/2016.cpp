#include<iostream>
using namespace std;
int main(){
    int n,x=0,y=0,z=0,px,py,pz;
    cin >> n;
    while(n--){
        cin >> px >> py >> pz;
        x += px;y += py;z += pz;
    }
    if(x==0 && y==0 && z==0) cout << "YES";
    else cout << "NO";
    return 0;
}