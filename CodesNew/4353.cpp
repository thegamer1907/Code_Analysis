//30, 06, 2018, 10:59:44 Rafaelcs cpp
#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
typedef long double ld;
typedef long long ll;

typedef unsigned long long ull;
typedef pair<string, int>   psi;

const int N = 500100;
string s[N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;

    cin >> n;

    int sum = 0;

    for(int i = 0 ; i < n ; i++){
        cin >> s[i];

        sum += s[i].length();
    }
    
    string low = s[n - 1];
    
    for(int i = n - 2 ; i >= 0 ; i--){
        string tmp = "";
        bool find = false;
        
        for(int j = 0 ; j < min(s[i].length(), low.length()) ; j++){
            if(s[i][j] != low[j]){
                if(s[i][j] < low[j]){
                    low = s[i];
                }else{
                    s[i] = s[i].substr(0, j);
                    low = s[i];
                }

                find = true;
                break;
            }
        }

        if(!find){
            if(s[i].length() < low.length())
                low = s[i];
            else{
                s[i] = low;
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        cout << s[i] << '\n';
    }
    
    return 0;
}