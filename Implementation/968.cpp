#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    string a;
    cin >> x >> y >> a;
    while(y--){
        for(int i=1; i<x; i++){
            if(a[i]=='G'&&a[i-1]=='B'){
                a[i]='B';
                a[i-1]='G';
                i++;
            }
        }
    }
    cout << a << endl;
    return 0;
}
