#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.length();
    int c1=0,c0=0,a=0;
    for(int i=0;i<l;i++)
    {
        if(s[i] == '1')
        {
            c1++;
            c0=0;
        }
        else
        {
            c1=0;
            c0++;
        }
        
        if(c1 == 7 || c0 == 7)
        {
            a++;
            break;
        }
    }
    if(a == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}