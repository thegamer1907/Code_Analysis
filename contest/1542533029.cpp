#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define MXS 2000000001

int main(){


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //vector<string> names;
    int n;
    string src, tm[205];
    cin >> src;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> tm[i];
    }
    bool ans = 0;
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n; k++){
            if(tm[i] == src || (tm[i][1]== src[0] && tm[k][0] == src[1]) ){
                ans = 1;
                break;
            }
        }
    }
    if(ans){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

    return 0;
}
