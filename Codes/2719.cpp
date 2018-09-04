#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+500;
int A[N], x, sz, CNT[N];
string s, pt, sf, sp, ss, ans;
int main(){
    ios::sync_with_stdio(false);
    cin >> s;
    sz = (int)s.size();
    if(sz<3) return cout << "Just a legend", 0;
    A[1]=0;
    for(int i=1;i<(int)s.size();i++){
        x=A[i];
        while(x && s[x]!=s[i]) x=A[x];
        if(s[x] == s[i]) x++;
        A[i+1] = x;
        if(A[i+1]==(int)pt.size()) ans = pt;
    }
    for(int i=1;i<sz;i++) CNT[A[i]]++;
    x = A[sz];
    while(x && CNT[x]==0) x = A[x];
    if(!x) cout << "Just a legend";
    else for(int i=0;i<x;i++) cout << s[i];
}
