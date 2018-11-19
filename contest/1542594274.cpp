#include<iostream>
using namespace std;
    bool l1[27], l2[27];
int main()
{
    string s;
    int n;
    cin >> s >> n;
    for(int i = 0; i < n; i ++)
    {
        string s1;
        cin >> s1;
        if(s1 == s)
        {
            cout << "YES";
            return 0;
        }
        l2[s1[0] - 'a'] = 1;
        l1[s1[1] - 'a'] = 1;
    }
    if(l1[s[0] - 'a'] && l2[s[1] - 'a'] ) cout << "YES";
    else    cout << "NO";
    return 0;
}
