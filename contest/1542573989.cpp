#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
#include<string>
#include<sstream>
#include<set>
#include<list>
#include<stack>
#include<fstream>
#include<map>
#define endl "\n"
#define DE cout << "------" << endl
#define mems(a, b) memset(a, b, sizeof a)
using namespace std;
typedef long long ll;

const int maxn = 107;

string ans;
int n;

map<char, int> pre, suf;

int main(){
    cin >> ans;
    cin >> n;
    int ok = 0;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        pre[a[1]]++, suf[a[0]]++;
        if(a == ans) ok = 1;
    }
    if(pre[ans[0]] && suf[ans[1]] || ok == 1) cout << "YES";
    else cout << "NO";
}
