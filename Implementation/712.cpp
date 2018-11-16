#include <bits/stdc++.h>
using namespace std;
string swapElements(string s, int a, int b)
{
    char temp;
    temp = s[a];
    s[a] = s[b];
    s[b] = temp;
    return s;
}
int main()
{
    int n, t; cin >> n >> t;
    string q; cin >> q;
    for(int j=0; j<t; j++)
        for(int i=0; i<q.size(); i++)
            if(q[i] == 'B' && q[i+1] == 'G')
            {
                q = swapElements(q, i, i+1);
                i++;
            }
    cout << q;
    return 0;
}
