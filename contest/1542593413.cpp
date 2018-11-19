#pragma comment(linker, "/STACK:66777216")

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <iomanip>
#include <cstdio>
#include <queue>

using namespace std;

const int N = 2e3 + 7;
const long double eps = 1e-10;

int a[N];
string ss[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    string s;
    cin >> s >> n;
    for (int i = 0; i < n; i ++){
        cin >> ss[i];
    }
    int i = 0;
    while (i < s.size()){
            int w = 0;
        for (int j = 0; j < n; j ++){
            if (ss[j][0] == s[i]){
                if (i + 1 < s.size() && s[i + 1] == ss[j][1] || i + 1 >= s.size()){
                    i += 2;
    w++;
                    break;
                }
            }
        }
        if (!w){
            break;
        }
    }
    int ans = (i >= s.size());
    i = 1;
    int t = 0;
    for (int i = 0; i < n; i ++){
        if (ss[i][1] == s[0]){
            t = 1;
        }
    }
    while (i < s.size()){
            int w = 0;
        for (int j = 0; j < n; j ++){
            if (ss[j][0] == s[i]){
                if (i + 1 < s.size() && s[i + 1] == ss[j][1] || i + 1 >= s.size()){
                    i += 2;
    w++;
                    break;
                }
            }
        }
        if (!w){
            break;
        }
    }
    if (i >= s.size() && t == 1){
        ans = 1;
    }
    if (ans){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}

/*
*/
