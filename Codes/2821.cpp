#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;
const int MAX = 1e6 + 5;
int Next[MAX];
bool middle[MAX], post[MAX];
void getNext(string &a) {
    int i = 0, j = -1, len = a.size();
    Next[0] = -1;
    while(i < len) {
        if(j == -1 || a[i] == a[j]) {
            Next[++i] = ++j;
        } else {
            j = Next[j];
        }
    }
    for(int i = 1; i < len; ++i)
        if(Next[i] != i) {
            middle[Next[i]] = 1;
        }

    if(Next[len] != len)    post[Next[len]] = 1;
    j = Next[len - 1];
    while(j != -1) {
        if(a[j] == a[len - 1] && j != len - 1) {
            post[j + 1] = 1;
        }
        j = Next[j];
    }
}

int main() {
    int ans = 0;
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a;
    cin >> a;
    getNext(a);
    for(int i = a.size() - 2; i >= 0; --i)
        if(middle[i] && post[i]) {
            ans = i;
            break;
        }
    if(!ans)    cout << "Just a legend\n";
    else    cout << a.substr(0, ans) << '\n';
}
