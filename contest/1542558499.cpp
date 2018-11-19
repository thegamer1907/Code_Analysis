#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    string pw;
    int n;
    string word[101];
    string str = "aa";
    string tmp;
    cin >> pw;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> word[i];
        if(word[i] == pw){
            cout << "YES" << endl;
            return 0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            str[0] = word[i][1];
            str[1] = word[j][0];
            if(str == pw){
                cout << "YES" << endl;
                return 0;
            }

        }
    }

    cout << "NO" << endl;
    return 0;
}
