#include <bits/stdc++.h>
using namespace std;

int main (){
    int i;
    int ans = 1;
    string player;

    cin >> player;

    for (i=1; i<player.length(); i++){
        if (player[i]==player[i-1]){
            ans++;
        } else ans = 1;

        if (ans==7){
            break;
        }
    }

    if (ans==7){
        cout << "YES" << endl;
    } else cout << "NO" << endl;

}