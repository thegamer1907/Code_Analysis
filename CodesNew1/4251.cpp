#include <bits/stdc++.h>
using namespace std;
string  str[500100];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>str[i];
    }
    for(int i=n-1;i>0;i--)
    {
        string c;
        for(int j=0;str[i][j];j++)
        {
            if(str[i][j]>str[i+1][j])
            {
                str[i]=c;
                break;
            }
            else if(str[i][j]<str[i+1][j])
            {
                break;
            }
            c+=str[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<str[i]<<endl;
    }
    return 0;
}
