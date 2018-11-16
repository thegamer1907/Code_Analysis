#include<iostream>
using namespace std;

int main()
{
    int one=0, zero=0, i;
    string s;
    cin>> s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            zero++;
            one=0;
        }
        else 
        {
            one++;
            zero=0;
        }
        
        if(zero==7 || one==7)
        {
            cout<<"YES";
            break;
        }
    }
    if(i==s.length())
    cout<< "NO";
    return 0;
}