#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, t;
    string s1;
    char temp;
    cin >> n >> t;
    cin.ignore();

    getline(cin, s1);
    for(int a = 0; a<t; a++){
        for(int i = n-1; i>0; i--){
            if(s1[i]=='G' && s1[i-1]=='B'){
            temp = s1[i];
            s1[i] = s1[i-1];
            s1[i-1] = temp;
            i--;
            }
        }
    }
    cout << s1 << endl;

return 0;
}

