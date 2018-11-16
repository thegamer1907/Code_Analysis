#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

inline int make(char c)
{
    return (c-'0');
}

inline int make(char c1, char c2)
{
    return (10*(c1-'0')+(c2-'0'));
}

inline int make(char c1, char c2, char c3)
{
    return (100*(c1-'0')+10*(c2-'0')+(c3-'0'));
}

int main() 
{
    string s;
    cin >> s;
    
    for(int i=0; i<s.length(); i++)
    {
        if(!(make(s[i])&7))
        {
            cout << "YES\n"; 
            cout << make(s[i]) << endl;
            return 0;
        }
        if(s[i] == '0')
            continue;
        for(int j=i+1; j<s.length(); j++)
        {
            if(!(make(s[i],s[j])&7))
            {
                cout << "YES\n"; 
                cout << make(s[i],s[j]) << endl;
                return 0;
            }
            for(int k=j+1; k<s.length(); k++)
            {
                if(!(make(s[i],s[j],s[k])&7))
                {
                    cout << "YES\n"; 
                    cout << make(s[i],s[j],s[k]) << endl;
                    return 0;
                }
            }
        }
    }
    
    cout << "NO" << endl;
    
    return 0;
}
