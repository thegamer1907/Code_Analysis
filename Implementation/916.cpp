#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,m,i,j,k;
    string s;
    char c;
    cin>>n>>m;
    cin>>s;
    for(j=1;j<=m;j++)
    {
        for(k=0;k<n-1;k++)
        {
            if(s[k]=='B'&&s[k+1]=='G')
            {
                s[k]='G';
                s[k+1]='B';
                k++;
            }
        }
    }
   cout<<s;
    return 0;
}
