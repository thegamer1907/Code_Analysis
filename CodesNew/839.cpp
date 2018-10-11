#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1e6 + 7;
map<string,bool> mp;
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        string str;
        cin >> str;
        mp[str] = true;
    }
    int x = 0;
    for(int i = 0;i < m;i++){
        string str;
        cin >> str;
        if(mp[str])x++;
    }
    if(x%2==0){
        if(n > m)printf("YES");
        else printf("NO");
    }
    else{
        if(n >= m)printf("YES");
        else printf("NO");
    }
    return 0;
}