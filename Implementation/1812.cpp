#include <iostream>

using namespace std;

int main(){
    int n, x = 0, y = 0, z = 0, a, b, c;
    
    cin >> n;
    
    while(cin >> a >> b >> c){
        x += a;
        y += b;
        z += c;
    }
    
    if(x == 0 && y == 0 && z == 0)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}