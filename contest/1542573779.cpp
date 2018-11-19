#include<bits/stdc++.h>
using namespace std;

int main(){
    string ss;
    int n;
    cin >> ss >> n;
    int t = 0;
    string ch;
    while(n--){
        cin >> ch;
        if(t == 0){
            if(ss == ch){
                t = 3;
                break;
            }if(ss[0] == ch[1]){
                t = 1;
            }if(ss[1] == ch[0])
                t = 2;
        }if(t == 1){
            if(ss[1] == ch[0])
                t = 3;
        } if(t == 2)
            if(ss[0] == ch[1])
                t = 3;
        if(ss == ch){
                t = 3;
                break;
            }
        if(t == 3)
            break;
    }
    while(n-- && n > 0){
        cin >> ch;
    }
    if(t == 3)
        cout << "YES" << endl;
    else cout <<"NO" << endl;
    return 0;
}
