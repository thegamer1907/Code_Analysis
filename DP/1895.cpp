#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> AB;
    vector<int> BA;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]=='A' && s[i+1] == 'B'){
            AB.push_back(i);
        }
        if(s[i] == 'B' && s[i+1] == 'A'){
            BA.push_back(i);
        }
    }
    if(AB.size() == 0 || BA.size() == 0){
        cout << "NO" << endl;
    }else if(AB.size() >= 3 || BA.size()>=3){
        cout << "YES" << endl;
    }else
    if(AB.size() >=2 && BA.size() >= 2){
        cout << "YES" << endl;
    }else if(AB.size() == 2 && BA.size() == 1){
        if((AB[0] == BA[0]+1||AB[0] == BA[0]-1)&&(AB[1] == BA[0]+1||AB[1] == BA[0]-1)){
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
    }else if(AB.size() == 1 && BA.size() == 2){
        if((AB[0] == BA[0]+1||AB[0] == BA[0]-1)&&(AB[0] == BA[1]+1||AB[0] == BA[1]-1)){
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
    }else if(AB.size() == 1 && BA.size() == 1){
        if((AB[0] == BA[0]+1||AB[0] == BA[0]-1)){
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
    }
    return 0;
}