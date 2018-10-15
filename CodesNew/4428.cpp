//prince0fcrows
#include <bits/stdc++.h>
#define int long long
#define MX 500005
#define mod 1000000007

using namespace std;

string str[MX];

void comp(int a, int b){
    for(int i=0;i<min(str[a].length(), str[b].length());i++){
        if(str[a][i]<str[b][i]){
            return;
        }
        if(str[a][i]>str[b][i]){
            str[a].erase(str[a].begin()+i, str[a].end());
            return;
        }
    }
    if(str[a].length()>str[b].length()){
        str[a].erase(str[a].begin()+str[b].length(), str[a].end());
    }
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k, i, j, t, n, a, b, m;
    while(cin >> n ){
        for(i=0;i<n;i++){
            cin >> str[i];
        }
        for(i=n-1;i>=1;i--){
            comp(i-1, i);
        }
        for(i=0;i<n;i++){
            cout <<  str[i] << endl;
        }
        cout << endl;
    }
    return 0;
}










