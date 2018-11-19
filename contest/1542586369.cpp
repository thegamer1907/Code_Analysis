#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    int n;
    cin >> n;
    vector<string> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    int f1 = 0;
    int f2 = 0;
    for(int i = 0; i < n; i++){
        if(str == vec[i]){
            f1 = 1;
            f2 = 1;
            break;
        }
        else{
            if(str[0] == vec[i][1]) f1 =1;
            if(str[1] == vec[i][0]) f2 = 1;
        }
    }
    if(f1 && f2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
