#include<iostream>
using namespace std;
int main(){
    bool a= false, b = false;
    char x, xx, y, yy;
    int n;
    cin>>x>>xx;
    cin >> n;
    while(n--){
        cin >> y >> yy;
        if(y == xx)b = true;
        if(yy == x)a = true;
        if(x == y && xx == yy){
            cout << "YES\n";
            return 0;
        }
        if(y == xx){
            if(a) {
                cout << "YES\n";
                return 0;
            }
        }
        if(yy == x){
            if(b) {
                cout <<"YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
