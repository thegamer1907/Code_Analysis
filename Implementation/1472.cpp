#include <bits/stdc++.h>

using namespace std;

int main(){

    string a;

    cin >> a;

    int ones=0, zeros=0;

    for(int i=0; i<a.size(); i++){
        if(a[i]=='1'){
            ones++;
            zeros=0;
        }
        if(a[i]=='0'){
            zeros++;
            ones=0;
        }
        if(ones==7 or zeros==7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
