#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

    int main(){
        string password,kalb,str = "",str2 = "";
        int n;
        vector < string > Liste;
        size_t found;

        cin >> password;
        cin >> n;

        for(int i = 0;i < n;i ++) {
            cin >> kalb;
            Liste.push_back(kalb);
        }



        for(int i = 0;i < n;i ++) {
            for(int j = 0;j < n;j ++) {
                str = Liste[ i ] + Liste[ j ];
                found = str.find(password);
                if (found != string::npos) {
                cout << "YES";
                return 0;
                }

            }
        }
        cout << "NO";
        return 0;
    }
