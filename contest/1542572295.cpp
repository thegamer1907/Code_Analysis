// Beygut Beysenkhan

#include <bits/stdc++.h>

using namespace std;

#define IOI2018 ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0);

#define bbb return 0;
#define bb return
#define nl "\n"

#define calis typedef

calis long long LL;
calis float fl;

int n;
string s, k;
int q, w, e;
int main()
{
     IOI2018

     cin >> s;
     int n;
     cin >> n;
     cin >> k;
     string d = k;
     for(int i = 1; i < n; i++){
          cin >> k;
          d += k;
     }
     for(int i = 0; i < d.size(); i++){
          if(d[i] == s[1] && d[i - 1] == s[0]){
               cout << "YES" << nl;
               bbb
          }
          if(i % 2 != 0){
               if(d[i] == s[0]){
                    q++;
               }
          }
          if(i % 2 == 0){
               if(d[i] == s[1]){
                    w++;
               }
          }
     }
     if(q > 0 && w > 0){
          cout << "YES" << nl;
          bbb
     }
     cout << "NO" << nl;
     bbb
}

// Beygut Beysenkhan