#include <iostream>
using namespace std;

int main(){
    string a;
    bool agadute = false;
    cin >> a;
    int cont1 = 0, cont0 = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i]=='0'){
            cont0++;
        }
        else{
            cont0 = 0;
        }
        if(a[i]=='1'){
            cont1++;
        }
        else{
            cont1 = 0;
        }
        if(cont0>=7 || cont1>=7){
            agadute = true;
            break;
        }
    }
    if(agadute){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}
