#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,p;
    int n,i,f1=0,f2=0;
     cin >> p;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> s;
        if(s[1] == p[0])
            f1=1;
        if(s[0] == p[1])
            f2 = 1;
        if( (s[0]==p[0])&&(s[1]==p[1]) )
        {
            f1 = 1;
            f2 = 1;
        }
    }
    if(f1==1 && f2==1)
    {
            cout << "YES";
    }
    else
        cout << "NO";

 return 0;
}
