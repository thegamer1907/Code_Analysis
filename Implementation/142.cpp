#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define str string
#define v vector
#define vint v<int>
#define vstr v<str>
#define vbool v<bool>
#define get cin>>
#define put cout<<
using namespace std;

int main(){ios::sync_with_stdio(0);cin.tie(0);
    int n,a,b;get n>>a>>b;
    if (a>b)swap(a,b);
    vint arr(n);for (int i=0;i<n;i++)arr[i]=i+1;
    for (int k=1;arr.size()>2;k++){
        vint nw;
        for (int i=0;i<arr.size();i+=2){
            if (arr[i]==a&&arr[i+1]==b){
                put k;return 0;
            }
        }
        for (int i=0;i<arr.size();i+=2){
            if (a==arr[i]||a==arr[i+1]){
                nw.push_back(a);
            } else if (b==arr[i]||b==arr[i+1]){
                nw.push_back(b);
            } else nw.push_back(arr[i]);
        }
        //for (int i:nw)cout<<i<<" ";cout<<endl;
        arr=nw;
    }put "Final!";
    return 0;
}
