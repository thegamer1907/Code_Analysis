#include <iostream>

using namespace std;
string after(int n, int t, string s)
{
   // string ans = "";
    while(t>0)
    {


    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'B')
        {
            if(s[i+1] == 'G')
            {
               s[i] = 'G';
               s[i+1] = 'B';
               i++;
            }

        }

    }
    t--;
    }
    cout<<s;

}
int main()
{
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
   after(n,t,s);

}

