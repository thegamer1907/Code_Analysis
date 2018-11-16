#include <iostream>

using namespace std;

int main()
{
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]=='B'&&s[j+1]=='G'&&(j+1)<n)
            {
                swap(s[j],s[j+1]);
                if((j+2)<n)
                {
                    j++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout<<s;
    return 0;
}
