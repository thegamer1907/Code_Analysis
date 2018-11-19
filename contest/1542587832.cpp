#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    for(int i = 0;i < arr.size();i++)
    {
        if(arr[i][1] == s[0])
        {
            for(int j = 0;j < arr.size();j++)
            {
                if(arr[j][0] == s[1])
                {
                    cout << "YES";
                    return 0;
                }
            }
        }
        if(arr[i] == s)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
