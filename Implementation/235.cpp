#include <set>
#include <map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#define ex(a) { cout << a; exit(0); }
using namespace std;
int input(){
    int res = 0; char c = ' ';
    while (c < '0') c = getchar();
    while (c >= '0') res = res*10 + (c-'0'), c = getchar();
    return res;
}
const int N = 1e5+1;

vector <int> lft;
int main(){
    int n = input(), a = input(), b = input();
    if (a > b) swap(a, b);
    for (int i = 1; i <= n; ++ i)
        lft.push_back(i);
    int dep = 0, fl = 1;
    while (1){
        ++ dep;
        vector <int> nw;
        for (int i = 0; fl && i < lft.size(); i += 2){
            if (lft[i] == a && lft[i+1] == b)
                fl = 0;
            if (lft[i] == a || lft[i+1] == a) nw.push_back(a);
            else if (lft[i] == b || lft[i+1] == b) nw.push_back(b);
            else nw.push_back(lft[i]);
        }
        if (!fl) break;
        lft = nw;
    }
    int P = 1, lg = 0;
    while (P != n) P *= 2, ++ lg;
    if (lg == dep) cout << "Final!";
    else cout << dep;
}
