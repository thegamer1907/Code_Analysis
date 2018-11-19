#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <numeric>
#include <cmath>
#include <map>
#include <vector>
#include <queue>
#include <stack>
#include <cstring>
#include <queue>
#include <numeric>
#include <iomanip>
#define ll long long
using namespace std;
int n,m;
string s[105];
set<char> pre;
set<char> suf;
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    string target;
    cin>>target;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
        pre.insert(s[i][0]);
        suf.insert(s[i][1]);
        if(target==s[i]){
            cout<<"YES"; exit(0);
        }
    }
    if(suf.find(target[0])!=suf.end()){
        if(pre.find(target[1])!=pre.end()){
            cout<<"YES"; exit(0);
        }
    }
    cout<<"NO";
    return 0;
}