#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, i;
    string s;

    cin >> n >> t >> s;

    while(t--)
    {
        for(i = 1; i < s.size(); i++)
        {
            if(s[i] == 'G' && s[i - 1] == 'B') swap(s[i], s[i - 1]), i++;
        }
    }
    cout << s;
}
