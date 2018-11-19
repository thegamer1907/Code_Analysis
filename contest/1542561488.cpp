#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin >> s;

    int n;

    cin >> n;

    string ans = "NO";

    int fir = 0 , sec = 0 , fir1 = 0 , sec1 = 0;

    for(int i = 1 ; i<=n ; i++)
    {
        string t;

        cin >> t;

        if((s[0]==t[0] && s[1]==t[1]) || (s[0]==t[1] && s[1]==t[0]))
            ans = "YES";
        else
        {
            if(t[0]==s[1])
                fir=1;
            if(t[1]==s[0])
                sec=1;
            if(t[1]==s[0])
                fir1=1;
            if(t[0]==s[1])
                sec1=1;
        }
    }

    if(ans=="YES" || (fir==1 && sec==1) || (fir1==1 && sec1==1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
