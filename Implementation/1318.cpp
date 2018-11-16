#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,temp;
    char s[100];
    cin>>n>>t;
    cin>>s;
    for(i=1;i<=t;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                temp=int(s[j]);
                s[j]=s[j+1];
                s[j+1]=char(temp);
                j++;
            }
        }
    }
    cout<<s<<endl;

}
