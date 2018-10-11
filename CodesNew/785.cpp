#include <bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n , m, x=0, y=0;
    cin >> n >> m;
    string s[n], c[m];
    for(int i = 0; i < n; i++)cin >> s[i];
    for(int i = 0; i < m; i++)cin >> c[i];
    for(int i=0 ; i<n ; i++){
      for(int j=0 ; j<m ; j++){
        if(c[j]==s[i])y++;
      }
    }
    for(int i=0 ; i<m ; i++){
      for(int j=i+1 ; j<n ; j++){
        if(s[j]==c[i])x++;
      }
    }
    if(y%2)n++;
    n-=y;
    m-=y;
    if(n>m)puts("YES");
    else puts("NO");
  return 0;
}
