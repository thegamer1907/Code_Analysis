#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(s[j]=='G'&&s[j-1]=='B')
                {
                    s[j]='B';
                    s[j-1]='G';
                    j++;
                }
        }
    }
    //reverse(s.begin(),s.end());

    cout<<s<<endl;
    return 0;
}
