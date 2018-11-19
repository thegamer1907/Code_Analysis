#include <iostream>

using namespace std;

int n;
string s;
string d[101];

int main(){
    
    //cout << "HELLO" << endl;
    cin >> s;
    cin >> n;
    bool possible = false;
    bool pos1 = false;
    bool pos2 = false;
    for(int i = 0; i < n; i++){
        cin >> d[i];
        if(d[i] == s){
            possible = true;
        }else{
            if(d[i][1] == s[0]){
                pos1 = true;
            }
            if(d[i][0] == s[1]){
                pos2 = true;
            }
        }
    }
    if(pos1 && pos2){
        possible = true;
    }
    
    if(possible){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
}
