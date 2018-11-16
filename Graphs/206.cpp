#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    for(int i = 0; i < k; i++)
        for(int j = 0; j < s.size(); j++)
            if(s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j += 1;
            }
    cout << s;

    return 0;
}
