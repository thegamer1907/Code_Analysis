#include <bits/stdc++.h>
#define nl "\n"
#define spc " "
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;
    int ab, ba;
    int flag = 0;
    ab = s.find("AB");
    ba = s.find("BA", ab + 2);
    
    if(ab != -1 && ba != -1)
        flag = 1;
    ba = s.find("BA");
    ab = s.find("AB", ba + 2);
    
    if(ab != -1 && ba != -1)
        flag = 1;
    if(flag)    cout << "YES";
    else    cout << "NO";
    
    return 0;
}
