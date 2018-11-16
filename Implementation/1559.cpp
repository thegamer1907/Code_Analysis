#include <iostream>
using namespace std ;
int main()
{
    string s ;
    cin >> s ;
    int x = 0 ;
    for(int i = 0; i < s.size();++i)
    {
        if(s[i]=='0')
        {
            if(s[i-1]=='1')
                x =1 ;
            else
                ++x ;
        }
        else
        {
            if(s[i-1]=='0')
            x = 1 ;
            else
            ++x ;
        }
        if(x == 7)
        {
            cout << "YES" ;
            return 0 ;
        }
    }
    cout << "NO" ;
}