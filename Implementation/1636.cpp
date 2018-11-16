#include <iostream>

using namespace std;
string s;
int main()
{
    int dem=0;
    cin >> s;
    for (int i=0;i<s.length();i++){
       if(s[i]==s[i+1])dem++;
    else if (dem<6&&s[i]!=s[i+1]) dem=0;
    }
    if (dem>=6) cout << "YES";
    else cout << "NO";
}