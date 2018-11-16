#include <iostream>
#include <cstring>
#include <limits.h>
using namespace std;
int main()
{
    int n,t ; cin>>n>>t;
    string s; cin>>s;
    while(t--)
    {
         int i=0;
        while(i<n)
        {
            if(s[i]=='G')
                i++;
            else
            {
                if(s[i+1]=='G')
                {s[i]='G';  s[i+1]='B';i+=2;}
                else
                    i++;
            }
        }
    }
    for(int i=0;i<s.size();i++)
        cout<<s[i];
    cout<<endl;
}
