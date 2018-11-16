#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int m=0;m<k;m++)
    {
        for(int j=0;j<s.length()-1;j++)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                s.erase(j,1);
                s.erase(j,1);
                s.insert(j,"G");
                s.insert(j+1,"B");
                j++;
            }
        }
    }
    cout<<s;
}
