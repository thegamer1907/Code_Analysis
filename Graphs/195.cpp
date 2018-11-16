#include <iostream>

using namespace std;

int main()
{
    long n,t;
    cin >> n >> t;
    string s;
    cin >> s;
    for(long i=1; i<=t; i++)
    {
        for(long i=0; i<n; i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                char tg=s[i];
                s[i]=s[i+1];
                s[i+1]=tg;
                i++;
            }
        }
    }
    cout << s;
}