#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    
    int x,y,z,sumx=0,sumy=0,sumz=0;
    
    for(int i=0;i<n;++i){
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }
    
    if(sumx==0 && sumy==0 && sumz==0) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}   