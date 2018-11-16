#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)


using namespace std;

typedef long long ll;

const int MAXN = 112345;
const int MAXINT = 2147483098;
const ll MAXLL = 9223372036854775258LL;
const ll MOD = 1e9 + 7;






int main()
{
    fast;
    bool t1 = false, t2 = false, t3=false;
    string s;
    cin >> s;
    for (int i=0; i<s.size()-1; i++){
        if (i<s.size()-3 && t3==false && (s.substr(i,3)=="ABA" || s.substr(i,3)=="BAB")) t3 = true,i+=2;
        else if (s.substr(i,2)=="AB" && !t1) t1 = true, i++;
        else if (s.substr(i,2)=="BA" && !t2) t2 = true, i++;
    }


    if (t1 && t2 || (t3&&(t1||t2))) cout << "YES";
    else cout << "NO";



    return 0;
}
