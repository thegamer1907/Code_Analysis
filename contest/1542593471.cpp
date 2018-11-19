/////////////////||
// vipsharmavip  ||
/////////////////||

#include "bits/stdc++.h"
#define ll long long
#define mod 1000000007

using namespace std;

int main(){
        cin.sync_with_stdio(false);
        int flag = 0;
        string x;
        cin >> x;
        int n;
        cin >> n;
        vector< string > ip;
        for(int i = 0 ; i < n ; ++i ){
            string y;
            cin >> y;
            ip.push_back(y);
        }
        for(int i = 0 ; i < n ; ++i ){
            for(int j = 0 ; j < n ; ++j ){
                string z = ip[i] + ip[j];
                int sz = z.size();
                for(int k = 0 ; k + 1 < sz ; ++k )
                     if(z[k] == x[0] && z[k + 1] == x[1])
                      flag = 1;
            }
        }
        if(flag) puts("YES"); else
            puts("NO");

   return 0;
}
