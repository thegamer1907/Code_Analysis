#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    string s;
    cin >> s;
    int n;
    cin >> n;
    string s1[n],sr = "";
    for(i = 0; i < n; i++)
    {
        cin >> s1[i];
    }
    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            sr = s1[i] + s1[j];
            if(sr.find(s) != -1)
            {
                cout << "YES";
                return 0;
            }
            sr = s1[j] + s1[i];
            if(sr.find(s) != -1)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
