#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{ 
    int n, t;
    string s;
    cin >> n >> t >> s;
    while(t--)
    for(int i = 1; i < n; i += 1)
    {
        if(s[i] == 'G' and s[i-1] == 'B')
        {
            
            s[i] = 'B';
            s[i - 1] = 'G';
            i++;
        }
    }
    
    cout << s << '\n';
    return 0;
}