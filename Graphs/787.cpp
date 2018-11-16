#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    int n,t;
    string res;
    stack <char> S;

    cin >> n >> t;
    cin >> x;
    //cout << x;
    int l = x.length();

    while(t--){
        for(int i = 0; i < l; i++){
            if(x[i] == 'B'){
                if( S.empty() ) S.push(x[i]);
                else res += x[i];
            }
            else{
                res += x[i];
                while( !S.empty()){
                    res += S.top();
                    S.pop();
                 }
            }
        }
        while( !S.empty()){
                    res += S.top();
                    S.pop();
            }
            x = res;
            res = "";
    }
    cout << x << endl;

    return 0;
}
