#include <bits/stdc++.h>
using namespace std;
#define clr(i, j)     memset(i, j, sizeof(i))
typedef long long     ll;
typedef long double   ld;
vector<int> PrefixFunction(string S) {
    vector<int> p(S.size());
    int j = 0;
    for (int i = 1; i < (int)S.size(); i++) {

        while (j > 0 && S[j] != S[i])
            j = p[j-1];

        if (S[j] == S[i])
            j++;
        p[i] = j;
    }
    return p;
}
int main()
{
    string s;
    cin >> s;
    vector<int> v = PrefixFunction(s);
    if(v[s.size()-1] == 0)
        cout << "Just a legend" << endl;
    else
    {
        int n = 0;
        for(int i=1; i<s.size()-1; i++)
        {
            //cout << v[i] << " ";
            if(v[i] == v[s.size()-1])
                n = v[s.size()-1];
        }
        //cout << endl;
        if(n == 0)
        {
            if(v[v[v.size()-1]-1])
                cout << s.substr(0, v[v[v.size()-1]-1]) << endl;
            else
                cout << "Just a legend" << endl;
        }
        else
            cout << s.substr(0, n) << endl;
    }
}

