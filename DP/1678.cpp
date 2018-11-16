#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    cin>>s;
    int dem1=0,dem2=0,dem3=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
            if(s[i+2]!='A')dem1++;
            else 
            {dem3++;
            i=i+2;}
        }
        else if(s[i]=='B'&&s[i+1]=='A')
        {
            if(s[i+2]!='B')dem2++;
            else 
            {dem3++;
            i=i+2;}
        }
        if((dem1>=1&&dem2>=1)||(dem3>=2)||(dem1>=1&&dem3>=1)||(dem2>=1&&dem3>=1))
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}