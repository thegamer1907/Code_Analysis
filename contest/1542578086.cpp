#include <iostream>

using namespace std;

int main()
{
    string s,p,st = "";
    char a[123], b[123];
    int n;
    bool prvi = false , drugi = false, ima = false;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        a[i] = p[0];
        b[i] = p[1];
        if ( s.compare(p) == 0) ima = true;
    }
    if (ima) {cout<<"YES"; return 0;}
    for (int i=0; i<n; i++)
    {
        for (int j=0; j <n; j++)
        {
            if ( b[i] == s[0] && a[j] == s[1] ) ima = true;
        }
    }
    if (ima) cout <<"YES";
    else cout << "NO";
    return 0;
}
