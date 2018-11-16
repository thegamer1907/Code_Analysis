#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int i,j,n,t;
    cin>>n>>t;
    cin>>s;
    for(i=1;i<=t;i++)
    {
        for(j=0;j<n;)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j=j+2;
            }
            else
            {
                j++;
            }

        }
    }
    cout<<s;
 return 0;
}



