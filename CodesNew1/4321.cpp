#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string b[n],a[n];
    for (int i=0;i<n;i++){
        cin >> b[i];
    }
    int h=0;
    a[n-1]=b[n-1];
    string s="#";
    for (int i=n-2;i>-1;i--){

        for (int j=1;j<b[i].size();j++){
            if (b[i][j]<=a[i+1][j]){
                if (b[i][j]<a[i+1][j]){
                    a[i]=b[i];
                    break;
                }
                s+=b[i][j];
                h=1;
            }
            else{
                a[i]=s;
                s="#";
                h=0;
                break;
            }
        }
        if (h==1){
            s="#";
            a[i]=b[i];
            h=0;
        }
    }
    for (int i=0;i<n-1;i++){
        cout << a[i] << endl;
    }
    cout << b[n-1];
}
