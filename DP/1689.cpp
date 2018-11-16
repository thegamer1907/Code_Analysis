#include<iostream>
#include<climits>
#include<algorithm>
#include<cstdio>
#include<string.h>
using namespace std;
typedef long long ll;

int main(){
    string str;
    cin >> str;

    bool fab=false;
    bool fba=false;
    int n=str.length();
    for(int i=0;i<n;){

        if(str[i]=='A' && fab==false){
            if(i+1 < n && str[i+1]=='B' ){
                i+=2;
                fab=true;
            }
            else{
                i+=1;
            }
        }

        else if(str[i]=='B' && fba==false && fab==true){
            if(i+1 < n && str[i+1]=='A' ){
                i+=2;
                fba=true;
            }
            else{
                i+=1;
            }
        }

        else{
            i+=1;
        }

        if(fab && fba){
            break;
        }
    }

    if(fab&& fba){
        cout << "YES" << endl;
    }
    else {
        fab=false;
        fba=false;

        for (int i = 0; i < n;) {

            if (str[i] == 'A' && fab == false && fba==true) {
                if (i + 1 < n && str[i + 1] == 'B') {
                    i += 2;
                    fab = true;
                } else {
                    i += 1;
                }
            } else if (str[i] == 'B' && fba == false) {
                if (i + 1 < n && str[i + 1] == 'A') {
                    i += 2;
                    fba = true;
                } else {
                    i += 1;
                }
            } else {
                i += 1;
            }

            if (fab && fba) {
                break;
            }
        }

        if(fab&& fba){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}