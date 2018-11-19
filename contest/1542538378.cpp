#include <bits/stdc++.h>

using namespace std;

const int N = 1e2 + 7;

struct cmp{
char f, s;
}s[N];

int main()
{
    int n;
    string isk;
    cin>>isk;
    cin>>n;
    for(int i = 1; i <= n ; ++i){
        string q;
        cin>>q;
        s[i].f=q[0];
        s[i].s=q[1];
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
        if(s[i].s == isk[0] && s[j].f == isk[1] || (i==j && s[i].f == isk[0] && s[i].s == isk[1])){
            cout<<"YES";
            return 0;
         }
        }
    }
    cout<<"NO";

    return 0;
}
