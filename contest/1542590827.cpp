#include<iostream>
using namespace std;
int main(){
    string s;
    int n,f=0,l=0,p=0;

    cin >> s;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string c;
        cin >> c;
        if(c==s){
            cout << "YES";
            return 0;
        }
        if(c[1]==s[0]){
            p++;

        }
        if(c[0]==s[1]){
            l++;


        }
        if(p && l){
            cout << "YES";
            return 0;
        }
        f=0;
    }
    cout << "NO";
}
