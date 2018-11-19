#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long

void Q_Q ()
{
    ios::sync_with_stdio(0);
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
}

int main()
{
    Q_Q ();
    /*freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);*/
    string s;
    cin>>s;
    int n;
    cin>>n;
    bool yes=0;
    int c=0;
    int b=0;
    while (n--)
    {
        string ss;
        cin>>ss;
        if (ss==s)
        {
           yes=1;
        }
        else
        {
            if (ss[1]==s[0])
                c++;
            if (ss[0]==s[1])
               b++;
            if (c>0 && b>0)
            {
                yes=1;
            }
        }
    }
    if (yes)
        return cout << "YES" , 0;
    cout << "NO";
    return 0;

}
