

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,t;
    string s,r;
    cin >> n >> t;
    cin >> s;
    r=s;
    for (int j=0; j<t; j++)
    {
        for (int i=0; i<n; i++)
        {
            if (s[i+1]=='G' && s[i]=='B')
            {
                r[i]='G';
                r[i+1]='B';
            }
        }
        s=r;
    }
    cout << s;
}