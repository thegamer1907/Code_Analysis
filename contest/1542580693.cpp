#include <bits/stdc++.h>

using namespace std;

string pass;
int n;
string words[101];
string may;
bool passed = false;

int main(){

    //ifstream cin("in.txt");
    cin >> pass;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> words[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            may = words[i] + words[j];
            for(int q = 0; q < may.length() + 1; q++){
                if(may[q - 1] == pass[0] && may[q] == pass[1]){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";

}
