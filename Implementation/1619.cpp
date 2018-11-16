#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int dem=1;
    bool check=true;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i+1]==s[i]) dem++;
        else dem=1;
        if(dem==7) check=false;
    }
    if(check==true) cout << "NO";
    if(check==false) cout << "YES";
}
