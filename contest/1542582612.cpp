#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int  ull;


int main(){


    int n;
    string pass;
    string src[105];

    cin >> pass;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> src[i];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            //if( i != j ){
                if( (src[i][1] == pass[0] && src[j][0] == pass[1]) || (src[j][1] == pass[0] && src[i][0] == pass[1]) ){
                    cout << "YES\n";
                    return 0;
                }
                if( src[i] == pass || src[j] == pass ){
                     cout << "YES\n";
                    return 0;
                }
            //}
        }
    }
    cout << "NO\n";

    return 0;
}