#include "bits/stdc++.h"
using namespace std;

#define min(x, y) (x < y ? x : y)

string s[205][2];
int ans[205];
int n, m;

int calc(string x){
  
  //cout << x << '\n';

    int val = 1;
    while(true){

        bool ok = 1;
   //     cout << val << endl;
        for(int k = 0; k < (1 << val); k++){

            string go;
            for(int i = 0; i < val; i++)go.push_back('0' + bool(k & (1 << i)));

            if(x.find(go) == string::npos){
                ok = 0;
                break;
            }

        }

        if(!ok)
            return val - 1;

        val++;
    }



}

int main(){

   // ios_base::sync_with_stdio(0);
   // cin.tie(0);
    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> s[i][0];
        s[i][1] = s[i][0];
        ans[i] = calc(s[i][0]);

    }

    cin >> m;

    for(int i = 0; i < m; i++){

        int x, y;
        cin >> x >> y;
        x--, y--;
        s[n+i][0] = s[x][0] + s[y][0];
        s[n+i][1] = s[x][1] + s[y][1];
        reverse(s[n+i][1].begin(), s[n+i][1].end());
        s[n+i][0] = s[n+i][0].substr(0, min(int(s[n+i][0].size()), 1000));
        s[n+i][1] = s[n+i][1].substr(0, min(int(s[n+i][1].size()), 1000));
        reverse(s[n+i][1].begin(), s[n+i][1].end());
        ans[n+i] = max(ans[x], ans[y]);
        ans[n+i] = max(ans[n+i], calc(s[x][1] + s[y][0]));
        cout << ans[n+i] << '\n';

    }



    return 0;
}
