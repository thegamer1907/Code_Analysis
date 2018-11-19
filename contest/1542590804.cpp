#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    string pass;
    cin >> pass >> n;
    string gaf[n];
    for(i = 0; i < n; i++){
        cin >> gaf[i];
        if(gaf[i] == pass){cout << "YES"; return 0;}
    }
    if(n == 1 && pass[0] == gaf[0][1] && pass[1] == gaf[0][0]){cout << "YES"; return 0;}
    
    for(i = 0; i < n; i++){
        if(gaf[i][0] == pass[1])
            for(int j = 0; j < n; j++){
                if(gaf[j][1] == pass[0])
                {cout << "YES"; return 0;}
            }
    }
    cout << "NO";
    return 0;
}