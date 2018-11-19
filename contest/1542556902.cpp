#include <iostream>
using namespace std;
int main() {
    string password; cin >> password;
    int n; cin >> n;
    string a[101],x,y,primeros[101],segundos[101];
    x = password[0]; y=password[1];
    bool resp=false,resp1=false,resp2=false;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        primeros[i] = a[i][0];
    }
    for(int i=1; i<=n; i++){
        segundos[i] = a[i][1];
    }
    for(int i=1; i<=n; i++){
        if(segundos[i] == x){
            resp1 = true;
        }
    }
    for(int i=1; i<=n; i++){
        if(primeros[i] == y){
            resp2 = true;
        }
    }
    if(resp1 & resp2){
        resp = true;
    }
    for(int i=1; i<=n; i++){
        if(a[i]==password){
            resp = true;
        }
    }
    if(resp){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}