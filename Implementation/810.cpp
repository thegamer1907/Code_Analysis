#include <iostream>

using namespace std;

int n,z;
string s;

int main()
{
    cin>>n>>z;
    cin>>s;
    for(int i=0;i<z;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
    }
    cout<<s;
}
