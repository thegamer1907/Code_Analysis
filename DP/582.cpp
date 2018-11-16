#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000 * 100;
int prs[MAXN + 10];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string str;
    int m;
    cin >> str >> m;
    for(int i = 0; i < str.size() - 1; i++){
        if(str[i] == str[i + 1])
            prs[i + 1] = prs[i] + 1;
        else
            prs[i + 1] = prs[i];
    }
    int a, b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        cout << prs[b - 1] - prs[a - 1] << endl;
    }
}
