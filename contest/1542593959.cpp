#include "bits/stdc++.h"
using namespace std;

/*
  zura Ja - nai.
  KATSURA DA.
*/

#define F first
#define S second
#define ios ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

const int N = 2e5 + 5;
string s[105];
int main(){
    string tmp;cin>>tmp;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> s[i];

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            string cur = s[i] + s[j];

            for(int k = 1; k < cur.size(); k++)if(cur.substr(k-1,2) == tmp)return puts("YES");

        }

    }
    puts("NO");


    return 0;
}
