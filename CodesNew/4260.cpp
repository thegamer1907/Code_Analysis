#include<bits/stdc++.h>
using namespace std;
const int MAXN = 5e5 + 5;

string a[MAXN];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int len = a[n - 1].length();
    for(int i = n - 2; i >= 0; i--){
        int tlen = a[i].length();
        string s = "";
        for(int j = 0; j < tlen && j < len; j++){
            if(a[i][j] == a[i + 1][j]){
                s += a[i][j];
            }
            else if(a[i][j] < a[i + 1][j]){
                while(j < tlen){
                    s += a[i][j++];
                }
            }
            else{
                break;
            }
        }
        len = s.length();
        a[i] = s;
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
    return 0;
}
