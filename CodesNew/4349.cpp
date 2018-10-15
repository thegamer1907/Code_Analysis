#include <iostream>
#include <cstdio>

using namespace std;

int n, ans, j;

string s[500000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);

    cin >> n;

    for(int i = n - 1; i >= 0; i--){
            cin >> s[i];
    }
    for(int i = 0; i < n - 1; i++){
        if(s[i] < s[i + 1]){
            for(j = 0; j < s[i].size(); j++){
                    if(s[i][j] < s[i + 1][j]){break;}
            }
            s[i + 1] = s[i + 1].substr(0,j);
        }
    }
    for(int i = n - 1; i >= 0; i--){
            cout << s[i] << "\n";
    }



    return 0;
}

