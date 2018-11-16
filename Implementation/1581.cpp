#include<bits\stdc++.h>
using namespace std;
int main()
{
    int k=1;
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
            k+=1;
        if(s[i]!=s[i+1])
        {
            if(k>=7)
            {
                cout<<"YES";
                return 0;
            }
            k=1;
        }
    }
    if(k<7)
        cout<<"NO";
    if(k>=7)
        cout<<"YES";
    return 0;

}